#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <list>
#include "Maps.h"

using namespace std;
//TASK 9
//PRE:  empty map is provided (sent as reference)
//POST: open an input file. 
//      process each line, and each word in each line
//      convert all words to lowercase
//      add the word into the map with the line number given
//      close the file

void processBuild(Map<std::string, list<int>>& wordMap) {
	std::cout << "\n\nCode processBuild using Maps\n";

	ifstream inFile;
	inFile.open("Text.txt");
	if (!inFile.good()) {
		cout << "unable to open file\n";
		return;
	}

	string inLine, inWord, token;
	vector<string> tokens;
	int lineNumber = 0;
	while (getline(inFile, inLine)) {
		//get words from the inLine record
		++lineNumber;
		stringstream inSS(inLine);
		tokens.clear();
		while (inSS >> token)
			tokens.push_back(token);

		//make each word lower case & add to the map

	}
	inFile.close();
}