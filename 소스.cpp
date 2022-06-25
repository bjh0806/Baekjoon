#include <iostream>

using namespace std;

int main()
{
	int num{};
	cin >> num;

	float studentNum[100]{};
	float data[1000]{};
	float sum{};
	float avg[1000]{};
	float goodScore{};
	float result[1000]{};
	
	for (int i{}; i < num; ++i) {
		cin >> studentNum[i];
		sum = 0;
		goodScore = 0;

		for (int j{}; j < studentNum[i]; ++j) {
			cin >> data[j];
			sum += data[j];
		}

		avg[i] = sum / studentNum[i];

		for (int j{}; j < studentNum[i]; ++j) {
			if (data[j] > avg[i]) {
				goodScore += 1.0f;
			}
		}

		result[i] = (goodScore * 100.0f) / studentNum[i];
	}

	cout << fixed;
	cout.precision(3);

	for (int i{}; i < num; ++i) {
		cout << result[i] << "%" << endl;
	}
}