/*
	program: TesiamLaborus.cpp
	author: Deividas Gedgaudas 2018 ITF-18/2
	date: 2018 - 11 - 06
	name: Laboratorinis #3 - 3.12
	
*/

#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
const string inputFileName =  "input.txt",
		  outputFileName = "o.txt";

ofstream outputFile (outputFileName);

void nuskaitymas(int &n);
int  atvirksciai(int n);

int main() {
	int n;
	nuskaitymas(n);
	atvirksciai(n);
	outputFile.close();
}

void nuskaitymas(int &n) {
	ifstream inputFile (inputFileName);
	inputFile >> n;
	inputFile.close();
}

int atvirksciai(int n) {
	if(n % 10 < 1) return n;
	else {
		outputFile << n % 10;
		outputFile << endl;
		return atvirksciai(n/10);
	}
}
