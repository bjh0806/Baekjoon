#include <iostream>

using namespace std;

int main()
{
	int T{};
	cin >> T;

	int H[100]{};
	int W[100]{};
	long long N[10000];

	for (int i{}; i < T; ++i) {
		cin >> H[i] >> W[i] >> N[i];
	}

	int x[100]{};
	int y[100]{};

	for (int i{}; i < T; ++i) {
		if (N[i] % H[i] == 0) {
			if (N[i] == H[i]) {
				y[i] = H[i];
			}

			else {
				y[i] = N[i] / H[i];
			}
			
			x[i] = N[i] / H[i];
		}

		else {
			y[i] = N[i] % H[i];
			x[i] = N[i] / H[i] + 1;
		}

		cout << y[i] * 100 + x[i] << endl;
	}
}