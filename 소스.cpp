#include <iostream>

using namespace std;

int main()
{
	int T{};
	cin >> T;

	int k[10000]{};
	int n[10000]{};
	
	for (int i{}; i < T; ++i) {
		cin >> k[i] >> n[i];
	}

	for (int i{}; i < T; ++i) {
		int result[10000][15]{};

		for (int j{}; j <= k[i]; ++j) {
			for (int l = 1; l <= n[i]; ++l) {
				if (j == 0) {
					result[0][l] = l;
				}

				else if (l == 1) {
					result[j][1] = 1;
				}

				else {
					result[j][l] = result[j - 1][l] + result[j][l - 1];
				}
			}
		}

		cout << result[k[i]][n[i]] << endl;
	}
}