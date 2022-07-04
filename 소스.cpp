#include <iostream>

using namespace std;

int main()
{
	string s{};
	cin >> s;

	int alpha[26]{};

	for (int i{}; i < s.size(); ++i) {
		s[i] = toupper(s[i]);
	}

	for (int i{}; i < s.size(); ++i) {
		alpha[s[i] - 65]++;
	}

	int max{};
	int same{};

	for (int i{}; i < 26; ++i) {
		if (alpha[i] > max) {
			max = alpha[i];
			same = 0;
		}

		else if (alpha[i] == max) {
			same++;
		}
	}

	if (same != 0) {
		cout << "?" << endl;
	}

	else {
		for (int i{}; i < 26; ++i) {
			if (alpha[i] == max) {
				cout << char(i + 65) << endl;
			}
		}
	}
}