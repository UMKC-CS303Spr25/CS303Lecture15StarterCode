#pragma once
#include <iostream>
#include <iomanip>
#include <set>

//Pair structure - used to build Maps
template<typename Key, typename Value>
struct Pair {
	Key first;
	Value second;

	//default constructor
	Pair() : first(Key()), second (Value()) {}

	//overloaded constructor
	Pair(const Key& x, const Value& y) : first(x), second(y) {}

	Pair<Key, Value> makePair(const Key& x, const Value& y) {
		return Pair<Key, Value>(x, y);
	}

	bool operator<(const Pair<Key, Value>& other) const {
		return first < other.first; // Compare only keys for ordering
	}
};

template<typename Key, typename Value >
class Map {
	private:
		std::set<Pair<Key, Value>>  theMap;

	public:

		bool empty()				 { return theMap.empty(); }
		int size()					 { return theMap.size(); }
 
		// Check if key exists
		bool contains(const Key& key) const {
			return theMap.find(Pair<Key, Value>(key, Value())) != theMap.end();
		}

		// Get value by key
		Value& at(const Key& key) {
			auto it = theMap.find(Pair<Key, Value>(key, Value()));
			if (it != theMap.end()) {
				// Need to const_cast because set elements are const
				return const_cast<Value&>(it->second);
			}
			throw std::out_of_range("Key not found");
		}
		
		// Print all key-value pairs (for demonstration)
		void print() const {
			for (const auto& pair : theMap) {
				std::cout << pair.first << ": " << pair.second << std::endl;
			}
		}

		// Print all key-value pairs (for demonstration)
		void print(int i) const {
			for (const auto& pair : theMap) {
				std::cout << std::setw (8) << std::left << pair.first << ": ";
				for (auto i: pair.second)
					std::cout << i << " - ";
				std::cout << std::endl;
			}

		}

		//TASK 6
		//PRE:  accepts the key & value to insert
		//POST: attempts to use the set command find with the given Pair
		//      if found, erase the value at the iterator
		//      use the emplace function to add the key & value
		void insert(const Key& key, const Value& value) {
			std::cout << "\n\nCode Map Insert\n";
			// Search by key
			auto it = theMap.find(Pair<Key, Value>(key, Value()));

			// Key exists - need to remove and reinsert to update

			// use emplace to add key,value combination

		}

		//TASK 7
		//PRE:  accepts the key  
		//POST: uses the set command find with the given value
		//      if found, return a reference to the location of the value 
		//      so it can be modified
		//      if not found, add a key & value
		//         then return a reference to the location of that value
		Value& operator[](const Key& key) { 
			auto it = theMap.find(Pair<Key, Value>(key, Value()));
			if (it != theMap.end()) {
				return const_cast<Value&>(it->second);
			}

			// Key doesn't exist - insert new pair with default value
			auto result = theMap.emplace(key, Value());
			return const_cast<Value&>(result.first->second);
		}

		//TASK 8
		//PRE:  accepts the key  
		//POST: uses the set command find with the given Pair
		//      if found, erase the value at the iterator 
		void erase(const Key& key) {
			std::cout << "\n\nCode Map Erase\n";

		}

};