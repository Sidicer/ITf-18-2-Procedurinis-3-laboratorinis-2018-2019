/*
	program: TesiamLaborus.cpp
	author: Deividas Gedgaudas 2018 ITF-18/2
	date: 2018 - 11 - 06
	name: Laboratorinis #3 - 3.10
	
*/

#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
const int DYDIS = 1000;

void skaiciavimai(int n, int Data[], int &min, int &max, double &avg);

int main() {
	
	int n, Data[DYDIS],
		min(9999999), max(-9999999);
	double avg(0);
	ifstream inputFile ("seka.txt");
	inputFile >> n;
	for (int i = 0; i < n; i++) {
		inputFile >> Data[i];
	}
	inputFile.close();
	
	skaiciavimai(n,Data,min,max,avg);
	
	ofstream outputFile ("seka_rez.txt");
	outputFile << min << " " << max << " ";
	outputFile << fixed << setprecision(2) << avg;
	outputFile.close();
}

void skaiciavimai(int n, int Data[], int &min, int &max, double &avg) {
	int tmp(0);
	for (int i = 0; i < n; i++) {
		if (Data[i] < min) min = Data[i];
		if (Data[i] > max) max = Data[i];
		tmp += Data[i];
	}
	avg = (double)tmp/n;
}
