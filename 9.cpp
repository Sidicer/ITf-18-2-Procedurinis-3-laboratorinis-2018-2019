/*
	program: TesiamLaborus.cpp
	author: Deividas Gedgaudas 2018 ITF-18/2
	date: 2018 - 11 - 05
	name: Laboratorinis #3 - 9
	
*/

#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;
const int DYDIS = 10000;

void nuskaitytiSeka(int & n, int Seka[]),
	 surikiuotiElementus(int n, int Seka[]),
	 spausdintiRezultatus(int n, int Seka[]);

int main() {
	
	int n, Seka[DYDIS];
	nuskaitytiSeka(n, Seka);
	surikiuotiElementus(n, Seka);
	spausdintiRezultatus(n, Seka);
	
}

void nuskaitytiSeka(int & n, int Seka[]) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> Seka[i];	
	}
}

void surikiuotiElementus(int n, int Seka[]) {
	bool keiciasi;
	for (int i = 0; i < n - 1; i++) {
		keiciasi = false;
		
		for (int j = 0; j < n - i - 1; j++) {
			if (Seka[j] < Seka[j+1]) {
				swap(Seka[j],Seka[j+1]);
				keiciasi = true;
			}
		}
		
		if (!keiciasi) break;
	}
}

void spausdintiRezultatus(int n, int Seka[]) {
	for (int i = 0; i < n; i++) {
		cout << Seka[i];
		if (i < n-1) cout << " ";
	}
}
