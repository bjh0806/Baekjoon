#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int T{};
	int N[10000]{};
	int S[10000]{};
	int count{};

	cin >> T;
	
	for (int i{}; i < T; ++i) {
		cin >> N[i];
	}

	int result[2]{};
	int num = 2;

	while (num <= 10000) {
		int n = 3;

		if (num == 2 || num == 3 || num == 5 || num == 7) {
			S[count] = num;
			
			if (num == 2) {
				num++;
			}

			else {
				num += 2;
			}

			count++;
		}

		else if (num % 2 != 0) {
			while (n <= sqrt(num)) {
				if (num % n == 0) {
					num += 2;
					break;
				}

				n += 2;

				if (n > sqrt(num)) {
					S[count] = num;
					num += 2;
					count++;
				}
			}
		}
	}

	for (int i{}; i < T; ++i) {
		if ((N[i] / 2) % 2 != 0 || N[i] / 2 == 2) {
			result[0] = N[i] / 2;
		}

		else {
			result[0] = N[i] / 2 - 1;
		}

		while (result[1] == 0) {
			num = 0;

			while (1) {
				if (result[0] == S[num]) {
					break;
				}

				else if (S[num] < result[0]) {
					num++;
				}

				else {
					result[0] -= 2;
					num = 0;
				}
			}

			for (int j{}; j < count; ++j) {
				if (N[i] - result[0] == S[j]) {
					result[1] = N[i] - result[0];
					break;
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