#include <iostream>

using namespace std;

int main()
{
	int x{};
	int y{};
	int z{};

	int result[6]{};

	cin >> x >> y >> z;

	result[x - 1]++;
	result[y - 1]++;
	result[z - 1]++;

	int complete{};

	for (int i{}; i < 6; ++i) {
		if (result[i] == 3) {
			cout << 10000 + (i + 1) * 1000 << endl;
			complete = 1;
			break;
		}

		else if (result[i] == 2) {
			cout << 1000 + (i + 1) * 100 << endl;
			complete = 1;
			break;
		}
	}

	if (complete == 0) {
		for (int i = 5; i >= 0; --i) {
			if (result[i] != 0) {
				cout << (i + 1) * 100 << endl;
				complete = 1;
				break;
			}
		}
	}
}