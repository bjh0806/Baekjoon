#include <iostream>

using namespace std;

int main()
{
	int T{};
	cin >> T;

	int R[1000]{};
	string S[1000]{};
	string result[1000]{};

	for (int i{}; i < T; ++i) {
		cin >> R[i];
		cin >> S[i];
	}

	for (int i{}; i < T; ++i) {
		for (int j{}; j < S[i].size(); ++j) {
			for (int k{}; k < R[i]; ++k) {
				result[i] += S[i][j];
			}
		}
	}

	for (int i{}; i < T; ++i) {
		cout << result[i] << endl;
	}
}