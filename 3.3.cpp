#include <iostream>
using namespace std;

void DecToBin(int a) {
	if (a != 0) DecToBin(a / 2);
	if (a != 0) cout << a % 2;
}

int main() {
	
	int a;
	cin >> a;
	if (a == 0) { cout << 0; return 0; }
	DecToBin(a);
	
}
