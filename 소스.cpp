#include <iostream>
#include <cmath>

using namespace std;

int N[246913]{};

int main()
{
	int M[100000]{};
	int count{};

	while (1) {
		cin >> M[count];

		if (M[count] == 0) {
			break;
		}

		count++;
	}

	int result{};

	for (int i{}; i < count; ++i) {
		result = 0;

		for (int j = M[i] + 1; j <= 2 * M[i]; ++j) {
			if (N[j] == 1) {
				result++;
				continue;
			}

			int n = 3;

			if (j != 1 && j == 2 || j == 3 || j == 5 || j == 7) {
				result++;
				N[j] = 1;
			}

			else if (j % 2 != 0) {
				while (n <= sqrt(j)) {
					if (j % n == 0) {
						break;
					}

					n += 2;

					if (n > sqrt(j)) {
						result++;
						N[j] = 1;
					}
				}
			}
		}

		cout << result << endl;
	}
}