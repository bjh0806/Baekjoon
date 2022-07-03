#include <iostream>

using namespace std;

int main()
{
	int c{};
	cin >> c;

	string s{};
	cin >> s;

	int result{};

	for (int i{}; i < c; ++i) {
		result += (s[i] - 48);
	}

	cout << result << endl;
}