#include <iostream>

using namespace std;

int main()
{
	char c{};
	cin >> c;

	int result{};

	if (isupper(c)) {
		result = 65 + (c - 'A');
	}

	else if (islower(c)) {
		result = 97 + (c - 'a');
	}

	else {
		result = 48 + (c - '0');
	}

	cout << result << endl;
}