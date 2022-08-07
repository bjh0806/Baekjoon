#include <iostream>

using namespace std;

int main()
{
	int n[6] = { 1,1,2,2,2,8 };
	int num[6]{};

	for (int i{}; i < 6; ++i) {
		cin >> num[i];
		cout << n[i] - num[i] << " ";
	}
}