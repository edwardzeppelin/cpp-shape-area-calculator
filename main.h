#pragma once
#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void mainmenu() {
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "Menu:" << endl;
    cout << "1 - Calculate square of rectangle" << endl;
    cout << "2 - Calculate square of circle" << endl;
    cout << "3 - Calculate square of trapeze" << endl;
    cout << "4 - Calculate square of triangle" << endl;
    cout << "5 - Save results to the file" << endl;
    cout << "6 - Read the file" << endl;
    cout << "7 - Exit" << endl;
    cout << "Choose an action: ";
}

void readfile(const string& filename) {

	ifstream inputFile(filename);


	if (!inputFile.is_open()) {
		cerr << "Unable to open file: " << filename << endl;
		return;
	}

	string line;

	while (getline(inputFile, line)) {
		cout << line << endl;
	}

	inputFile.close();
}

void writefile(const string& filename, square* shapes[], int arraySize) {

    ofstream outputFile(filename);


    if (!outputFile.is_open()) {
        cerr << "Unable to open file: " << filename << endl;
        return;
    }

    for (int i = 0; i < arraySize; ++i) {
        if (shapes[i] == nullptr)
            continue;
        outputFile << "Square " << i + 1 << ": " << shapes[i]->calcsquare() << endl;
    }

    outputFile.close();
}

#endif