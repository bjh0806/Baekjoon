#include <iostream>

using namespace std;

int main()
{
	string A{};
	string B{};

	cin >> A >> B;

	int C[10002]{};
	int count{};
	int num{};
	int up{};
	int a = A.size() - 1;
	int b = B.size() - 1;

	if (a >= b) {
		count = A.size();
	}

	else {
		count = B.size();
	}

	while (num != count) {
		if (a >= 0 && b >= 0) {
			C[num] = A[a] - 48 + B[b] - 48;
		}

		else {
			if (a < 0) {
				C[num] = B[b] - 48;
			}

			else if (b < 0) {
				C[num] = A[a] - 48;
			}
		}

		if (up != 0) {
			C[num]++;
			up = 0;
		}

		if (C[num] >= 10) {
			C[num] -= 10;
			up++;
		}

		num++;
		a--;
		b--;
	}

	if (up != 0) {
		C[num]++;

		for (int i = num; i >= 0; --i) {
			cout << C[i];
		}
	}

	else {
		for (int i = num - 1; i >= 0; --i) {
			cout << C[i];
		}
	}
}