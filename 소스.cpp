#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long num{};
	cin >> num;

	long long count = 1;

	while (1) {
		if ((3 * pow(count, 2) - 3 * count + 1) >= num) {
			break;
		}

		else {
			count++;
		}
	}

	cout << count << endl;
}