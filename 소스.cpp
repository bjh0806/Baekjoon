#include <iostream>

using namespace std;

int main()
{
	double N{};
	
	cin >> N;

	double score[1000]{};

	for (int i{}; i < N; ++i) {
		cin >> score[i];
	}

	double max{};

	for (int i{}; i < N; ++i) {
		if (score[i] >= max) {
			max = score[i];
		}
	}

	double sum{};

	for (int i{}; i < N; ++i) {
		score[i] = score[i] / max * 100;
		sum += score[i];
	}

	cout << sum / N << endl;
}