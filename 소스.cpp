#include <iostream>

using namespace std;

void Recursion(int n, int count)
{
	for (int i{}; i < count; ++i) {
		cout << "____";
	}

	cout << "\"����Լ��� ������?\"" << endl;

	for (int i{}; i < count; ++i) {
		cout << "____";
	}

	if (n != 0) {
		cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���." << endl;

		for (int i{}; i < count; ++i) {
			cout << "____";
		}

		cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���." << endl;

		for (int i{}; i < count; ++i) {
			cout << "____";
		}

		cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" << endl;
	}

	else {
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << endl;
	}

	if (n - 1 >= 0) {
		Recursion(n - 1, count + 1);
	}
}

void recursion(int n, int count)
{
	for (int i{}; i < count; ++i) {
		cout << "____";
	}

	cout << "��� �亯�Ͽ���." << endl;

	if (n - 1 >= 0) {
		recursion(n - 1, count - 1);
	}
}

int main()
{
	int N{};
	cin >> N;

	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << endl;
	Recursion(N, 0);
	recursion(N, N);
}