#include <iostream>

using namespace std;

int main()
{
	long long A{};
	long long B{};
	long long C{};

	cin >> A;
	cin >> B;
	cin >> C;

	long long num{};

	if (B >= C) {
		num = -1;
	}

	else {
		num = A / (C - B) + 1;
	}

	cout << num << endl;
}