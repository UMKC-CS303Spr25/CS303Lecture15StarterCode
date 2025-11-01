#pragma once

#include <set>
#include <ostream>

//PRE:  take in the output stream and a set to output
//POST: print { followed by the elements in the set and }
template<typename Item_Type>
std::ostream& operator<<(std::ostream& out,
    const std::set<Item_Type>& a_set) {
    out << "{";
    bool first = true;
    for (typename std::set<Item_Type>::const_iterator itr = a_set.begin();
        itr != a_set.end(); ++itr) {
        if (first)
            out << *itr;
        else
            out << ", " << *itr;
        first = false;
    }
    return out << "}";
}

template<typename Key_Type, typename Compare>
bool contains(const std::set<Key_Type, Compare>& s,
    const Key_Type& k) {
    return s.find(k) != s.end();
}

//TASK 1
//PRE:  Accepts 2 sets
//POST: Overloaded operator + will use the STL functions to
//      implement a ‘union’ of the two sets
//      and return the resulting set

template<typename Key_Type, typename Compare>
std::set<Key_Type, Compare> operator+(
        const std::set<Key_Type, Compare>& left,
        const std::set<Key_Type, Compare>& right) {

    std::cout << "\n\nCode: Find the Union using +\n";
    std::set<Key_Type, Compare> result(left);
    result.insert(right.begin(), right.end());

    return result;
}

//TASK 2
//PRE:  Accepts 2 sets
//POST: Overloaded operator - will use the STL functions to
//      implement a ‘difference’ between two sets
//      and return the resulting set

template<typename Key_Type, typename Compare>
std::set<Key_Type, Compare> operator-(
        const std::set<Key_Type, Compare>& left,
        const std::set<Key_Type, Compare>& right) {

    std::cout << "\n\nCode: Find the Difference using -\n";

    //left - right = items in left that are not in the right
    //start by initializing the new result to the left


    //set up a constant iterator to move through the right set
    //erase any value of the iterator from the 'result' 



    return left;
}

//TASK 3
//PRE:  Accepts 2 sets
//POST: Overloaded operator * will use the STL functions 
//      and previously defined - operator
//      to find the intersection between two sets
//      and return the resulting set

template <typename Key_Type, typename Compare>
std::set<Key_Type, Compare> operator*(
        const std::set<Key_Type, Compare>& left,
        const std::set<Key_Type, Compare>& right) {

    std::cout << "\n\nCode: Find the Intersection using * \n";

    return left;
}

//TASK 4
//PRE:  Accepts 2 sets
//POST: Overloaded operator / will use the STL functions 
//      and previously defined - and + operators
//      to find the symmetric difference of two sets
//      and return the resulting set

template <typename Key_Type, typename Compare>
std::set<Key_Type, Compare> operator/(
    const std::set<Key_Type, Compare>& left,
    const std::set<Key_Type, Compare>& right) {

    std::cout << "\n\nCode: Find the Symmetric Difference using / \n";

    return left;
}



 