#include <iostream>

using namespace std;

string star[2188][2188]{};
int x{};
int y{};

void recursion(int x, int y, int n, int N)
{
	for (int i = x; i < x + N / 3; ++i) {
		for (int j = y; j < y + N / 3; ++j) {
			star[i][j] = " ";
		}
	}
}

void s_recursion(int x, int y, int n, int N)
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
		for (int i = x; i < x + N / 3; ++i) {
			for (int j = y; j < y + N / 3; ++j) {
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
		// 중앙 빈칸 생기는 기준 for문 재확인
		// x, y에 들어갈 값에 특정 값을 곱해줄 것
		// 매번 같은 공간에만 빈칸이 생김 (첫 번째 칸)
		// 항상 i, j가 1이 되므로 발생하는 결과 -> 전체 칸에서 몇 번째 칸인지 저장하는 변수 필요
		for (int i{}; i <= 3; ++i) {
			for (int j{}; j <= 3; ++j) {
				if (n == N) {
					x = i;
					y = j;
				}

				if (i == 1 && j == 1) {
					if (n == N) {
						recursion(i * n / 3, j * n / 3, n / 3, N);
					}

					else {
						s_recursion(i * n / 3, j * n / 3, n / 3, N);
					}
				}

				else {
					Recursion(i * N / 3, j * N / 3, n / 3, N);
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