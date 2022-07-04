#include <iostream>

using namespace std;

int main()
{
	string s{};
	cin >> s;

	int position[26]{};

	for (int i{}; i < 26; ++i) {
		position[i] = -1;
	}

	for (int i{}; i < s.size(); ++i) {
		if (position[s[i] - 97] == -1) {
			position[s[i] - 97] = i;
		}
	}

	for (int i{}; i < 26; ++i) {
		cout << position[i] << " ";
	}
}