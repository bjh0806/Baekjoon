#include <iostream>

using namespace std;

int main()
{
	string word{};
	cin >> word;

	int result{};

	for (int i{}; i < word.size(); ++i) {
		if (word[i] <= 'O') {
			result += ((word[i] - 65) / 3 + 3);
		}

		else if (word[i] <= 'S') {
			result += ((word[i] - 80) / 4 + 8);
		}

		else if (word[i] <= 'V') {
			result += ((word[i] - 84) / 3 + 9);
		}

		else {
			result += 10;
		}
	}

	cout << result << endl;
}