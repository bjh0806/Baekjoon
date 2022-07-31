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
		for (int j = 2; j < N[i]; ++j) {
			int n = 2;

			if (j != 1 && j == 2 || j == 3 || j == 5 || j == 7) {
				result[0] = j;

				if (N[i] - j == 2 || N[i] - j == 3 || N[i] - j == 5 || N[i] - j == 7) {
					result[1] = N[i] - j;
					break;
				}
				
				else {
					while (n <= sqrt(N[i] - j)) {
						if (N[i] - j % n == 0) {
							break;
						}

						n++;

						if (n > sqrt(N[i] - j)) {
							result[1] = N[i] - j;
							break;
						}
					}
				}
			}

			else if (j % 2 != 0) {
				while (n <= sqrt(j)) {
					if (j % n == 0) {
						break;
					}

					n++;

					if (n > sqrt(j)) {
						result[0] = j;
						n = 2;

						while (n <= sqrt(N[i] - j)) {
							if (N[i] - j % n == 0) {
								break;
							}

							n++;

							if (n > sqrt(N[i] - j)) {
								result[1] = N[i] - j;
							}
						}
					}
				}
			}
		}

		cout << result[0] << " " << result[1] << "\n";
	}
}