/*
	program: TesiamLaborus.cpp
	author: Deividas Gedgaudas 2018 ITF-18/2
	date: 2018 - 11 - 06
	name: Laboratorinis #3 - 3.8
	
*/

#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;
const int DYDIS = 100;

void nuskaityti(int &n, int &n1, int &n2, int Array[]),
	 surikiuoti(int n, int Array[]),
	 israsyti(int n, int Array[]);

int main() {
	
	int n, n1, n2, Array[DYDIS];
	nuskaityti(n,n1,n2,Array);
	surikiuoti(n,Array);
	israsyti(n,Array);
	
}

void nuskaityti(int &n, int &n1, int &n2, int Array[]) {
	cin >> n1;
	for (int i = 0; i < n1; i++)
		cin >> Array[i];
	
	cin >> n2;
	for (int i = n1; i < n1+n2; i++){
		cin >> Array[i];	
	}
	
	n = n1 + n2;
}

void surikiuoti(int n, int Array[]) {
	bool keiciasi;
	for (int i = 0; i < n - 1; i++) {
		keiciasi = false;
		
		for (int j = 0; j < n - i - 1; j++) {
			if (Array[j] > Array[j+1]) {
				swap(Array[j],Array[j+1]);
				keiciasi = true;
			}
		}
		
		if (!keiciasi) break;
	}
}

void israsyti(int n, int Array[]) {
	
	for (int i = 0; i < n; i++) {
		cout << Array[i];
		if (i != n) cout << " ";
	}
}
