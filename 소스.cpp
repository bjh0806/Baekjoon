#include <iostream>

using namespace std;

int main()
{
	int num[10]{};
	int num2[42]{};
	int result{};

	for (int i{}; i < 10; ++i) {
		cin >> num[i];
	}

	for (int i{}; i < 10; ++i) {
		num2[num[i] % 42]++;
	}

	for (int i{}; i < 42; ++i) {
		if (num2[i] != 0) {
			result++;
		}
	}

	cout << result << endl;
}