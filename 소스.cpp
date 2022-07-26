#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int M{};
	int N{};
	cin >> M >> N;

	for (int i = M; i <= N; ++i) {
		int n = 2;

		if (i != 1 && i == 2 || i == 3 || i == 5 || i == 7) {
			cout << i << '\n';
		}

		else {
			while (n <= sqrt(i)) {
				if (i % n == 0) {
					break;
				}

				n++;

				if (n > sqrt(i)) {
					cout << i << '\n';
				}
			}
		}
	}
}