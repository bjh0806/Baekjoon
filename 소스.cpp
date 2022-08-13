#include <iostream>

using namespace std;

void Recursion(int n)
{
	for (int i{}; i < n; ++i) {
		cout << "*";
	}

	cout << endl;

	for (int i{}; i < n / 3; ++i) {
		cout << "* *";
	}

	cout << endl;

	for (int i{}; i < n; ++i) {
		cout << "*";
	}

	cout << endl;
}

int main()
{
	int N{};
	cin >> N;

	Recursion(N);
}