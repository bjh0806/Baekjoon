#include <iostream>

using namespace std;

void Recursion(int n)
{
	for (int i{}; i < n; ++i) {
		cout << "*";
	}

	cout << endl;

	for (int i{}; i < n / 3; ++i) {
		cout << "*";
	}

	for (int i{}; i < n / 3; ++i) {
		cout << " ";
	}

	for (int i{}; i < n / 3; ++i) {
		cout << "*";
	}

	cout << endl;

	for (int i{}; i < n; ++i) {
		cout << "*";
	}

	cout << endl;

	if (n - 3 != 0) {
		Recursion(n - 3);
	}
}

int main()
{
	int N{};
	cin >> N;

	Recursion(N);
}