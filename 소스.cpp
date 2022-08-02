#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int T{};
	int N[10000]{};

	cin >> T;
	
	for (int i{}; i < T; ++i) {
		cin >> N[i];
	}

	int result[2]{};

	for (int i{}; i < T; ++i) {
		int n = 3;

		if ((N[i] / 2) % 2 != 0 || N[i] / 2 == 2) {
			result[0] = N[i] / 2;
		}

		else {
			result[0] = N[i] / 2 - 1;
		}

		while (n <= sqrt(result[0])) {
			if ((result[0]) % n == 0) {
				result[0] -= 2;
				break;
			}

			n += 2;
		}

		while (result[1] == 0) {
			n = 3;

			if (N[i] - result[0] == 2 || N[i] - result[0] == 3 || N[i] - result[0] == 5 || N[i] - result[0] == 7) {
				result[1] = N[i] - result[0];
				break;
			}
			
			else if (N[i] - result[0] % 2 != 0) {
				while (n <= sqrt(N[i] - result[0])) {
					if ((N[i] - result[0]) % n == 0) {
						break;
					}

					n += 2;

					if (n > sqrt(N[i] - result[0])) {
						result[1] = N[i] - result[0];
					}
				}
			}

			if (result[1] == 0) {
				result[0] -= 2;
			}
		}

		cout << result[0] << " " << result[1] << "\n";

		for (int j{}; j < 2; ++j) {
			result[j] = 0;
		}
	}
}