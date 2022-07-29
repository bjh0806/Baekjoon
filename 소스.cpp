#include <iostream>
#include <cmath>

using namespace std;

int N[246913]{};

int main()
{
	int T{};
	int n[10000]{};
	
	for (int i{}; i < T; ++i) {
		cin >> n[i];
	}

	int result[2]{};

	for (int i{}; i < T; ++i) {
		for (int j = 2; j < n[i]; ++j) {
			int n = 3;

			if (j != 1 && j == 2 || j == 3 || j == 5 || j == 7) {
				result[0] = j;
				result[1] = n[i] - j;
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