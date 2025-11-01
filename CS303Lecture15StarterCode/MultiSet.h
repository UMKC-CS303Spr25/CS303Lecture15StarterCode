#pragma once
#include <set>
#include <string>

using namespace std;

//PRE:  Accepts a set and a target value to find
//POST: Returns the number of targets in the multiset

//NOTE: multiset is not a template type, so templates cannot be used with
//      related functions

int countOccurrences(const multiset<string>& words_set, const string& target) {

	multiset<string>::const_iterator first_itr = words_set.lower_bound(target);
	multiset<string>::const_iterator last_itr = words_set.upper_bound(target);

	int count = 0;

	for (multiset<string>::const_iterator itr = first_itr; itr != last_itr; ++itr)
		++count;

	return count;
}

//PRE:  take in the output stream and a set to output
//POST: print { followed by the elements in the set and }
std::ostream& operator<<(std::ostream& out,
	const multiset<string>& mset) {
	out << "{";
	for (auto i : mset)
		out << i << " ";
	out << "}\n";

	return out;
}

//TASK 5
//PRE:  Accepts 2 sets
//POST: Overloaded operator + will use the STL functions to
//      implement a ‘union’ of the two sets
//      and return the resulting set

multiset<string> operator+(
	const multiset<string>& left,
	const multiset<string>& right) {

	std::cout << "\n\nFind the Union of 2 multisets using + \n";
	std::multiset<string> result(left);

	return result;
}

