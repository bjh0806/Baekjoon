#include <iostream>

using namespace std;

string star[2188][2188]{};

void recursion(int x, int y, int n, int N)
{
	for (int i = x; i < x + 3; ++i) {
		for (int j = y; j < y + 3; ++j) {
			star[i][j] = " ";
		}
	}
}

void Recursion(int x, int y, int n, int N)
{
	if (n == 3) {
		for (int i = x; i < x + 3; ++i) {
			for (int j = y; j < y + 3; ++j) {
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
			for (int j{}; j <= N; j += 3) {
				if (i == j && i == 3) {
					recursion(i, j, 3, N);
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