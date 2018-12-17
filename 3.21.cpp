/*
program: TesiamLaborus.cpp
author: Deividas Gedgaudas 2018 ITF-18/2
date: 2018 - 12 - 18
name: Laboratorinis #3 - 3.21

*/

#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

long long skaitmenuKiekis(long long n);
const double E = 2.71828182845904523536,
			 PI = 3.14159265358979323846;

int main() {

	long long n;
	cin >> n;

	cout << skaitmenuKiekis(n);

	return 0;
}

long long skaitmenuKiekis(long long n) {

	if (n < 0) return 0;
	if (n <= 1) return 1;

	double rez(0);
	rez = n * log10(n / E) + log10(2 * PI * n) / 2;

	return floor(rez) + 1;

}
