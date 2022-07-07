#include <iostream>

using namespace std;

int main()
{
	string s{};
	cin >> s;

	int num{};
	int count{};

	while (num != s.size()) {
		if (s[num] == 'c') {
			if (s[num + 1] == '=' || s[num + 1] == '-') {
				count++;
				num += 2;
				continue;
			}
		}

		else if (s[num] == 'd') {
			if (s[num + 1] == 'z' && s[num + 2] == '=') {
				count++;
				num += 3;
				continue;
			}

			else if (s[num + 1] == '-') {
				count++;
				num += 2;
				continue;
			}
		}

		else if (s[num] == 'l') {
			if (s[num + 1] == 'j') {
				count++;
				num += 2;
				continue;
			}
		}

		else if (s[num] == 'n') {
			if (s[num + 1] == 'j') {
				count++;
				num += 2;
				continue;
			}
		}

		else if (s[num] == 's') {
			if (s[num + 1] == '=') {
				count++;
				num += 2;
				continue;
			}
		}

		else if (s[num] == 'z') {
			if (s[num + 1] == '=') {
				count++;
				num += 2;
				continue;
			}
		}

		count++;
		num++;
	}

	cout << count << endl;
}