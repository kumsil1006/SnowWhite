
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int sum = -100;
	vector <int>n;
	int arr[7];
	for (int i = 0; i < 9; i++) {
		int num;
		cin >> num;
		n.push_back(num);

		sum += num;

	}

	int a{ 0 }, b{ 0 };
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (n[i] + n[j] == sum) {
				a = n[i];
				b = n[j];
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		if(n[i] != a && n[i] != b)
			cout << n[i] << endl;
	}
}
