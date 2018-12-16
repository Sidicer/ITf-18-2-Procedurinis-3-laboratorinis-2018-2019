/*
program: TesiamLaborus.cpp
author: Deividas Gedgaudas 2018 ITF-18/2
date: 2018 - 11 - 06
name: Laboratorinis #3 - 3.13

*/

#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
const string inputFileName = "13.txt",
			 outputFileName = "13.out";

void nuskaitymas(unsigned long long &n),
	 irasymas(unsigned long long n);
unsigned long long dvigubasFaktorialas(unsigned long long n);

int main() {

	unsigned long long n;
	nuskaitymas(n);
	irasymas(n);
	cout << dvigubasFaktorialas(n) << endl;
}

void nuskaitymas(unsigned long long &n) {
	ifstream inputFile(inputFileName);
	inputFile >> n;
	inputFile.close();
}

void irasymas(unsigned long long n) {
	ofstream outputFile(outputFileName);
	outputFile << dvigubasFaktorialas(n);
	outputFile.close();
}

unsigned long long dvigubasFaktorialas(unsigned long long n) {
	if (n == 0 || n == 1) return 1;
	
	return n * dvigubasFaktorialas(n - 2);
}
