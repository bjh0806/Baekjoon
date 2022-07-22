#include <iostream>

using namespace std;

int main()
{
	long long N{};
	cin >> N;

	long long n[5000001]{};
	int count{};

	while (N != 1) {
		int num = 2;
		int number = 3;

		if (N % num == 0) {
			n[count] = num;
			N /= num;
			count++;
		}

		while (num <= N / 2) {
			if (num % number == 0) {
				num += 2;
			}
		}
	}

	for (int i{}; i <= N; ++i) {
		num = 3;

		if (i != 1 && i == 2 || i == 3 || i == 5 || i == 7) {
			count++;
		}

		else if (i % 2 != 0) {
			while (n <= i / 2) {
				if (i % n == 0) {
					break;
				}

				n += 2;

				if (n > i / 2) {
					sum += i;
					count++;
				}
			}
		}
	}

	if (count == 0) {
		cout << -1 << endl;
	}

	else {
		cout << sum << endl << min << endl;
	}
}