#include <iostream>

using namespace std;

void SelfNum()
{
	int n = 1;
	int SN[10001]{};
	int N = 1;

	while (n <= 10000) {
		N = n;

		while (N <= 10000) {
			N = N + N / 1000 + N % 1000 / 100 + N % 1000 % 100 / 10 + N % 1000 % 100 % 10;

			if (N <= 10000 && SN[N] != 1) {
				SN[N] = 1;
			}
		}

		n++;
	}

	for (int i = 1; i <= 10000; ++i) {
		if (SN[i] != 1) {
			cout << i << endl;
		}
	}
}

int main()
{
	SelfNum();
}