#include <iostream>

using namespace std;

void factorial(int n, int result = 1) {
	if (n != 0) {
		result *= n;
	}

	if (n - 1 > 1) {
		factorial(n - 1, result);
	}

	else {
		cout << result << endl;
	}
}

int main()
{
	int N{};
	cin >> N;

	factorial(N);
}