#include <iostream>

using namespace std;

int main()
{
	int N{};
	cin >> N;

	int num[100]{};

	for (int i{}; i < N; ++i) {
		cin >> num[i];
	}

	int count{};
	int n = 3;

	for (int i{}; i < N; ++i) {
		n = 3;

		if (num[i] != 1 && num[i] == 2 || num[i] == 3 || num[i] == 5 || num[i] == 7) {
			count++;
			continue;
		}

		else if (num[i] % 2 != 0) {
			while (n <= num[i] / 2) {
				if (num[i] % n == 0) {
					break;
				}

				n += 2;

				if (n > num[i] / 2) {
					count++;
				}
			}
		}
	}

	cout << count << endl;
}