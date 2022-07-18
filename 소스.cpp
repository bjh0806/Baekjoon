#include <iostream>

using namespace std;

int main()
{
	int N{};
	cin >> N;

	int count1{};
	int count2{};

	count1 += N / 3;
	N -= count1 * 3;

	int count3 = count1;

	if (N != 0) {
		while (count3 != 0) {
			if ((N + count3 * 3) % 5 == 0) {
				count1 -= count3;
				count2 += (N + count3 * 3) / 5;
				N += count3 * 3;
				N -= count2 * 5;

				if (N == 0) {
					break;
				}
			}

			else {
				count3--;
			}
		}

		if (N != 0) {
			cout << -1 << endl;
		}

		else {
			cout << count1 + count2 << endl;
		}
	}

	else {
		while (count3 != 0) {
			if ((N + count3 * 3) % 5 == 0) {
				count1 -= count3;
				count2 += (N + count3 * 3) / 5;
				N += count3 * 3;
				N -= count2 * 5;

				if (N == 0) {
					break;
				}
			}

			else {
				count3--;
			}
		}

		cout << count1 + count2 << endl;
	}
}