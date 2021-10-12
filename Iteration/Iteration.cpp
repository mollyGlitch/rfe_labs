#include <iostream>
#include <stdlib.h>
#include <math.h>

int main() {
	double x = 0.0, zerox, dx, dx2;
	int i = 0, n;

	std::cout << "N, X0: "; std::cin >> n >> zerox;
	for (i; n; i++) {
		system("cls");
		std::cout << "X(" << i << "): "; std::cin >> x;
		dx = (x - zerox);
		dx2 = zerox + i * dx;
		std::cout << "Result: " << dx2;
	}

	return 0;
}