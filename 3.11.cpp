/*
	program: TesiamLaborus.cpp
	author: Deividas Gedgaudas 2018 ITF-18/2
	date: 2018 - 11 - 06
	name: Laboratorinis #3 - 3.11
	
*/

#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
const string inputFileName =  "11.in",
		  outputFileName = "11.out";

void nuskaitymas(int &n),
	 irasymas(int n);
int ntasisFib(int n);

int main() {
	
	int n;
	nuskaitymas(n);
	irasymas(n);
}

void nuskaitymas(int &n) {
	ifstream inputFile (inputFileName);
	inputFile >> n;
	inputFile.close();
}

void irasymas(int n) {
	ofstream outputFile (outputFileName);
	outputFile << ntasisFib(n);
	outputFile.close();
}

int ntasisFib(int n) {
	if (n <= 1) return n;
	return ntasisFib(n - 1) + ntasisFib(n - 2);
}
