#include <iostream>

using namespace std;

int main()
{
	int M{};
	int N{};
	cin >> M >> N;

	int n = 3;

	for (int i = M; i <= N; ++i) {
		n = 3;

		if (i != 1 && i == 2 || i == 3 || i == 5 || i == 7) {
			cout << i << endl;
		}

		else if (i % 2 != 0) {
			while (n <= i / 2) {
				if (i % n == 0) {
					break;
				}

				n += 2;

				if (n > i / 2) {
					cout << i << endl;
				}
			}
		}
	}
}