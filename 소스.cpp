#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long num{};
	cin >> num;

	long long count = 1;
	long long n{};

	while (1) {
		if ((pow(count, 2) + count) / 2 < num) {
			count++;
		}

		else {
			break;
		}
	}

	long long n1{};
	long long n2{};

	if ((pow(count, 2) + count) / 2 != num) {
		n = (pow(count, 2) + count) / 2 - num;

		if (count % 2 == 0) {
			n1 = count - n;
			n2 = 1 + n;
		}

		else {
			n1 = 1 + n;
			n2 = count - n;
		}
	}

	else {
		if (count % 2 == 0) {
			n1 = count;
			n2 = 1;
		}

		else {
			n1 = 1;
			n2 = count;
		}
	}

	cout << n1 << "/" << n2 << endl;
}