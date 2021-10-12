#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
	double x, y = x = 0;
	int R = 2;

	std::cout << "Enter x: ";
	std::cin >> x;

	if (x < 0) {
		if (x >= -9 && x <= -5) { y = sqrt(abs((R * R) - (x * x))); }
		if (x >= -5 && x <= -4) { y = 2; }
		if (x >= -4 && x < 0) { y = abs(x / 2); }
	}

	if (x == 0) { y = 0; }
	if (x > 0) {
		if (x > 0 && x < 2) { y = sqrt(abs((pow(M_PI, 2)) - (x * x))); }
		if (x >= 2 && x < M_PI) { y = sqrt(abs((x * x) - pow(M_PI, 2))); }
		if (x >= M_PI) { y = x * sin(M_PI / 2); }
	}

	std::cout << "Y = " << y << std::endl;

	return 0;

}