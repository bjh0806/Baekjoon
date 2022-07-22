#include <iostream>

using namespace std;

int main()
{
	int N{};
	cin >> N;

	int n[100000]{};
	int count{};
	int num{};

	if (N % 2 == 0) {
		num = 2;
	}

	else {
		num = 3;
	}

	int origin = N;

	while (N != 1) {
		if (N % num == 0) {
			while (N % num == 0) {
				n[count] = num;
				N /= num;
				count++;
			}
		}

		if (num == 2) {
			num++;
		}

		else {
			num += 2;

			while (num <= origin / 2) {
				if (origin % num == 0) {
					break;
				}

				else {
					num += 2;
				}
			}
		}

		if (num > origin / 2 && N != 1) {
			n[count] = N;
			count++;
			break;
		}
	}

	for (int i{}; i < count; ++i) {
		cout << n[i] << endl;
	}
}