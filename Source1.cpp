#include <iostream>
#include <ctime>

using namespace std;

int main() {
	srand(time(0));
	int m, n, temp = 0, iter = 1;
	const int a = 11;
	bool flag = true;
	while (flag) {
		temp = 0;
		cin >> m;
		cin >> n;
		while (temp < n) {
			temp += rand() % a;
		}
		cout << "Сумма:" << temp << endl;
		if (temp / m == 0) {
			cout << "Кол-во итераций " << iter << endl;
			flag = false;
		}
		else iter++;
	}
	return 0;
}