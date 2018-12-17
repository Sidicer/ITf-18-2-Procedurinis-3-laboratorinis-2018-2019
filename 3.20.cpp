/*
program: TesiamLaborus.cpp
author: Deividas Gedgaudas 2018 ITF-18/2
date: 2018 - 12 - 18
name: Laboratorinis #3 - 3.20

*/

#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

const int MAX = 100;

int main() {

	int n, koord[MAX],
		rez[MAX];

	cin >> n;
	for (int i = 1; i <= n; i++) cin >> koord[i];
	sort(koord + 1, koord + n + 1);

	rez[2] = koord[2] - koord[1];
	rez[3] = koord[3] - koord[1];
	
	for (int i = 4; i <= n; i++) rez[i] = min(rez[i - 1], rez[i - 2]) + koord[i] - koord[i - 1];

	cout << rez[n];
}
