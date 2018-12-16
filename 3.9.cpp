/*
	program: TesiamLaborus.cpp
	author: Deividas Gedgaudas 2018 ITF-18/2
	date: 2018 - 11 - 06
	name: Laboratorinis #3 - 3.9
	
*/

#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

void Keisti(int *a, int *b) {

	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;

}

int main() {
	
	int a, b;
	cin >> a >> b;
	Keisti(&a, &b);
	cout << a << " " << b;
}
