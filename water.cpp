#include <iostream>


int main() {
	setlocale (LC_ALL, "rus");
	int n, t = 0;
	std::cout << "¬ведите количество элементов массива: ";
	std::cin >> n;
	long int a[10000];
	for (int i=0; i < n; i++) {
		std::cin >> a[i];
	}
	for (int i=0; i < n; i++) {
		for (int j=0; j < n; j++) {
			if (a[i] <= a[j]) {
				if (t < abs((i - j) * a[i])) {
					t = abs((i - j) * a[i]);
				}
				else {
					continue;
				}
			}
			else {
				if (t < abs((i - j) * a[j])) {
					t = abs((i - j) * a[j]);
				}
				else {
					continue;
				}
			}
		}
	}
	std::cout <<"/n"<< t;
}
