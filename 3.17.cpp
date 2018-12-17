/*
program: TesiamLaborus.cpp
author: Deividas Gedgaudas 2018 ITF-18/2
date: 2018 - 12 - 18
name: Laboratorinis #3 - 3.17

*/

#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
const string inputFileName = "U1.txt",
			 outputFileName = "U1rez.txt";

const int MAX = 21;

int main() {

	int n, m,
		sumos[MAX][MAX], rez[MAX][MAX];

	ifstream inputFile(inputFileName);
	inputFile >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			inputFile >> sumos[i][j];
	inputFile.close();
	
	rez[1][1] = sumos[1][1];
	for (int i = 2; i <= n; i++) rez[i][1] = rez[i - 1][1] + sumos[i][1];
	for (int j = 2; j <= m; j++) rez[1][j] = rez[1][j - 1] + sumos[1][j];

	for (int i = 2; i <= n; i++)
		for (int j = 2; j <= m; j++)
			rez[i][j] = min(rez[i][j - 1], rez[i - 1][j]) + sumos[i][j];

	ofstream outputFile(outputFileName);
	outputFile << rez[n][m];
	outputFile.close();
}
