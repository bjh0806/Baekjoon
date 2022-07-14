#include <iostream>

using namespace std;

int main()
{
	long long A{};
	long long B{};
	long long V{};

	cin >> A >> B >> V;

	long long num = V / (A - B) + 1;
	long long result = A * num - B * num;

	while (1) {
		if (result - (A - B) >= V) {
			result -= (A - B);
			num--;
		}

		else {
			if (result - A + 2 * B >= V) {
				result -= (A - B);
				num--;
			}

			else {
				break;
			}
		}
	}

	cout << num << endl;
}