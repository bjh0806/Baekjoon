#include <iostream>

using namespace std;

int main()
{
	int h{};
	int m{};
	int time{};

	cin >> h >> m;
	cin >> time;

	h += time / 60;
	m += time % 60;

	if (m >= 60) {
		m -= 60;
		h += 1;
	}

	if (h >= 24) {
		h -= 24;
	}

	cout << h << " " << m << endl;
}