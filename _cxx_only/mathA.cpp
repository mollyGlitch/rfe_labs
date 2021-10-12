#include <iostream>
#include <math.h>

int main() {
	int s, t;
	double x;

	std::cout << "Enter S, T: "; std::cin >> s >> t;
	std::cout << "Enter X: "; std::cin >> x;

	double y = (exp(x/2)) / (sqrt(x + s * log(pow(x, t))));

	std::cout << "Y = " << y << std::endl;

	return 0;
}