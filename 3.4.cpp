#include <iostream>
using namespace std;

void Keisti(int & a, int & b) {

	int laikinas = a;
	a = b;
	b = laikinas;
	cout << a << " " << b;

}

int main() {
	
	int a, b;
	cin >> a >> b;
	Keisti(a, b);
	
}
