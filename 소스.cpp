#include <iostream>

using namespace std;

int main()
{
	int X{};
	int N{};
	int a[100]{};
	int b[100]{};
	int result{};

	cin >> X >> N;

	for (int i{}; i < N; ++i) {
		cin >> a[i] >> b[i];
		result += a[i] * b[i];
	}

	if (result == X) {
		cout << "Yes" << endl;
	}

	else {
		cout << "No" << endl;
	}
}