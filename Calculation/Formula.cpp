#include <iostream>
#include <math.h>

int main() {
	double x, y;
	int s, t;
	std::cout << "S, T: "; std::cin >> s >> t;
	std::cout << "X: "; std::cin >> x;

	y = (exp(x/2)) / sqrt(x + s * log(pow(x,t)));

	std::cout << "Y = " << y << std::endl;

	return 0;
}