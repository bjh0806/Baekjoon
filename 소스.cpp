#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s{};
	getline(cin, s);

	int count{};

	for (int i{}; i < s.size(); ++i) {
		if (isspace(s[i])) {
			count++;
		}
	}

	if (isspace(s[0])) {
		count--;
	}

	if (isspace(s[s.size() - 1])) {
		count--;
	}

	cout << count + 1 << endl;
}