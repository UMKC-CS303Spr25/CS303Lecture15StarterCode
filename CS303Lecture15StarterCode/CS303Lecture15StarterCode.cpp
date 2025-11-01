// CS303Lecture15a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//https://github.com/UMKC-CS303Spr25/CS303Lecture15StarterCode
#include <iostream>
#include <set>
#include <string>
#include "Sets.h"
#include "MultiSet.h"
#include "Maps.h"
#include "functions.h"

int main()
{
	cout << "\n\nUSING SETS\n";

	set<string> set1{ "hello", "see ya", "later", "alligator" };
	set<string> set2(set1);				//copy constructor
	set<string> set3{ "123", "456" };
	set<string> set4;

	//STL set includes insert
	set2.insert("bye now");
	set2.insert("later");
	set3.insert(set2.begin(), set2.end());
	set3.insert("789");
	set3.erase("123");

	//The overloaded '<<' operator is provided
	cout << set1 << endl;
	cout << set2 << endl;
	cout << set3 << endl;

	//TASK 1: Implement '+' Operator (Union)
	//NOTE: the Set STL contains the '=' Operator
	set4 = set1 + set3;

	cout << "\t\t" << set4 << endl;

	//TASK 2: Implement '-' Operator (Set Difference)
	cout << "\t\t" << (set4 - set1) << endl;
	cout << "\t\t" << (set1 - set4) << endl;


	//TASK 3: Implement '*' Operator (Intersection)
	cout << "\t\t" << set1 * set4 << endl;
	cout << "\t\t" << set4 * set1 << endl;

	//TASK 4: Implement '/' Operator (Symmetric Difference)
	cout << "\t\t" << set4 / set2 << endl;

	cout << boolalpha;
	cout << "\n\n" << contains(set1, string("ace")) << endl;
	cout << "\n\n" << contains(set3, string("123")) << endl;

	/*

	cout << "\n\nCOMPLETE MULTISETS CLASS\n";
	//multisets are in <set>

	//USING MULTISETS
	multiset<string> ms1 = { "hello", "see ya", "later", "alligator", "hello", "Later" };
	multiset<string> ms2 = { "123", "456", "456", "later", "alligator" };

	cout << countOccurrences(ms1, "hello") << endl;
	cout << ms1 << endl;

	//TASK 5: Implement '+' Operator (Union) for Multisets
	cout << ms1 + ms2 << endl;


	cout << "\n\nCOMPLETE MAP CLASS\n";
	Map<string, int> ages;

	//TASK 6: Complete the Map insert function
	//TASK 7: Complete the Map function []
	ages.insert("Alice", 25);
	ages.insert("Bob", 30);
	ages.insert("Charlie", 28);
	ages["Daniel"] = 29;

	cout << "Initial map:" << endl;
	ages.print();

	ages.insert("Bob", 37); // Update Bob's age
	ages["Alice"] = 99;		// Update Alices's age

	cout << "\nAfter updating Bob's & Alice's age:" << endl;
	ages.print();

	//TASK 8: Complete the Map erase function 
	ages.erase("Charlie");
	cout << "\nAfter removing Charlie:" << endl;
	ages.print();

	cout << "\nMap size: " << ages.size() << endl;
	cout << "Contains Alice? " << (ages.contains("Alice") ? "Yes" : "No") << endl;

	 
	//TASK 9: Complete index build
	cout << "\n\nAPPLYING MAPS\n";

	Map<string, list<int>> newMap;
	processBuild(newMap);
	newMap.print(2);
	*/
	return 0;
}


