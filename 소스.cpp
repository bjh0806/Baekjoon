#include <iostream>

using namespace std;

int main()
{
	int N{};
	cin >> N;

	string s[100]{};

	for (int i{}; i < N; ++i) {
		cin >> s[i];
	}

	char word[100]{};
	int count{};

	for (int i{}; i < N; ++i) {
		for (int j{}; j < 100; ++j) {
			word[j] = 0;
		}

		int num{};
		int stop{};

		while (num < s[i].size()) {
			word[num] = s[i][num];
			
			if (s[i][num - 1] != s[i][num]) {
				for (int k{}; k < num; ++k) {
					if (word[k] == word[num]) {
						stop = 1;
					}
				}
			}

			if (stop == 1) {
				break;
			}

			num++;

			if (num == s[i].size()) {
				count++;
			}
		}
	}

	cout << count << endl;
}