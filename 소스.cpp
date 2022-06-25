#include <iostream>

using namespace std;

int main()
{
	int num{};
	cin >> num;

	string answer[100]{};
	int result[100]{};

	for (int i{}; i < num; ++i) {
		cin >> answer[i];
		int Onum{};
		for (int j{}; j < answer[i].size(); ++j) {
			if (answer[i][j] == 'O') {
				Onum++;
			}

			else if (answer[i][j] == 'X') {
				while (Onum != 0) {
					result[i] += Onum;
					Onum -= 1;
				}
			}
		}

		while (Onum != 0) {
			result[i] += Onum;
			Onum -= 1;
		}
	}

	for (int i{}; i < num; ++i) {
		cout << result[i] << endl;
	}
}