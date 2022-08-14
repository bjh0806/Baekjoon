#include <iostream>

using namespace std;

void Recursion(int n)
{
	string star[3]{};
	string bigstar[3]{};

	if (n == 3) {
		star[0] = "***";
		star[1] = "* *";
		star[2] = "***";
	}

	else {
		bigstar[0];
	}

	if (n == 3) {
		for (int i{}; i < n; ++i) {
			cout << star[i] << endl;
		}
	}
}

int main()
{
	int N{};
	cin >> N;

	Recursion(N);
}