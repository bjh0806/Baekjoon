#include <iostream>

using namespace std;

int main()
{
	int M{};
	int N{};
	cin >> M >> N;

	if (M <= 2) {
		cout << 2 << endl;
		M = 3;
	}

	int n = 3;

	for (int i = M; i <= N; i += 2) {
		n = 3;

		if (i == 3 || i == 5 || i == 7) {
			cout << i << endl;
		}

		else {
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