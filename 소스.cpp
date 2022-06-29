#include <iostream>

using namespace std;

int CountNum(int n)
{
	int result = 0;
	int N = 100;

	if (n < 100) {
		result = n;
	}

	else {
		result += 99;

		while (N <= n) {
			if ((N / 100 - N % 100 / 10) == (N % 100 / 10 - N % 100 % 10)) {
				result++;
			}

			N++;
		}
	}

	return result;
}

int main()
{
	int n;
	cin >> n;

	cout << CountNum(n) << endl;
}