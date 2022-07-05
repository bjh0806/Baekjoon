#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1{};
	string s2{};

	cin >> s1;
	cin >> s2;

	string S1{};
	string S2{};

	for (int i = s1.size() - 1; i >= 0; --i) {
		S1 += s1[i];
	}

	for (int i = s2.size() - 1; i >= 0; --i) {
		S2 += s2[i];
	}

	for (int i{}; i < S1.size(); ++i) {
		if (S1[i] > S2[i]) {
			cout << S1 << endl;
			break;
		}

		else if (S1[i] < S2[i]) {
			cout << S2 << endl;
			break;
		}

		else {
			continue;
		}
	}
}