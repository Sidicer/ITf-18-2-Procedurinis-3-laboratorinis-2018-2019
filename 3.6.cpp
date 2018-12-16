#include <iostream>
using namespace std;

bool IsPrime(long long a) {

	if (a < 2) { return false; }
	if (a == 2) { return true; }
	if (a % 2 == 0) { return false; }
	for (int i = 3; pow(i, 2) <= a; i += 2) {
		if (a % i == 0) { return false; }
	}
	return true;

}

int main()
{
	int n;
	cin >> n;

	if (IsPrime(n)) {
		cout << 1;
	}
	else {
		cout << 0;
	}

	return 0;
}
