/*
program: TesiamLaborus.cpp
author: Deividas Gedgaudas 2018 ITF-18/2
date: 2018 - 11 - 06
name: Laboratorinis #3 - 3.16

*/

#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
const string inputFileName = "duom.txt",
			 outputFileName = "U1rez.txt";

void nuskaitymas(int &k, int &n),
	 irasymas(int k, int n);
int formule(int k, int n);

int main() {

	int k, n;
	//nuskaitymas(k, n);
	//irasymas(k, n);
	cin >> k >> n;
	cout << (int)pow(k, n);
}

void nuskaitymas(int &k, int &n) {
	ifstream inputFile(inputFileName);
	inputFile >> k >> n;
	inputFile.close();
}

void irasymas(int k, int n) {
	ofstream outputFile(outputFileName);
	outputFile << formule(k, n);
	outputFile.close();
}

int formule(int k, int n) {
	if (k == 0 || k == n) return 1;


}
