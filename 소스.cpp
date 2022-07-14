#include <iostream>

using namespace std;

int main()
{
	long long A{};
	long long B{};
	long long V{};

	cin >> A >> B >> V;

	long long num = 1;
	long long result{};

	while (1) {
		if (result + A - B >= V) {
			break;
		}

		else {
			if (result + A >= V) {
				break;
			}

			else {
				result += (A - B);
				num++;
			}
		}
	}

	cout << num << endl;
}