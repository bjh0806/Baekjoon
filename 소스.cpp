#include <iostream>

using namespace std;

int main()
{
	int M{};
	int N{};
	cin >> M >> N;

	int min = 10001;
	int sum{};
	int count{};
	int n = 3;

	for (int i = M; i <= N; ++i) {
		n = 3;

		if (i != 1 && i == 2 || i == 3 || i == 5 || i == 7) {
			sum += i;
			count++;

			if (i <= min) {
				min = i;
			}
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

					if (i <= min) {
						min = i;
					}
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