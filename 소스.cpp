#include <iostream>

using namespace std;

string star[2188][2188]{};

void Recursion(int x, int y, int n, int N)
{
	if (n == 3) {
		for (int i = x; i < y; ++i) {
			for (int j = x; j < y; ++j) {
				if (i % 3 == j % 3 && i % 3 == 1) {
					star[i][j] = " ";
				}

				else {
					star[i][j] = "*";
				}
			}
		}

		if (N == 3) {
			for (int i{}; i < N; ++i) {
				for (int j{}; j < N; ++j) {
					cout << star[i][j];
				}

				cout << endl;
			}
		}
	}

	else {
		for (int i{}; i <= N; i += 3) {
			for (int j = 3; j <= N; j += 3) {
				if (i == j - 3 && i == 3) {
					continue;
				}

				else {
					Recursion(i, j, 3, N);
				}
			}

			cout << endl;
		}

		for (int i{}; i < N; ++i) {
			for (int j{}; j < N; ++j) {
				cout << star[i][j];
			}

			cout << endl;
		}
	}
}

int main()
{
	int N{};
	cin >> N;

	Recursion(0, 3, N, N);
}