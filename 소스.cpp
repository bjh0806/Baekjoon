#include <iostream>

using namespace std;

void Recursion(int n, int count)
{
	if (n != 0) {
		for (int i{}; i < count; ++i) {
			cout << "----";
		}

		cout << "\"����Լ��� ������?\"" << endl;

		for (int i{}; i < count; ++i) {
			cout << "----";
		}

		cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���." << endl;

		for (int i{}; i < count; ++i) {
			cout << "----";
		}

		cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���." << endl;

		for (int i{}; i < count; ++i) {
			cout << "----";
		}

		cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" << endl;

		Recursion(n - 1, count + 1);
	}
}

int main()
{
	int N{};
	cin >> N;

	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << endl;
	Recursion(N, 0);
}