#include <iostream>
using namespace std;

int Suma(int a, int b) {
	return a + b;
}

int main() {
	
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << Suma(a, b) + Suma(c, d);
	
}
