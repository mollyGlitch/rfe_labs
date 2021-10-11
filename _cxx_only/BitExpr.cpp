#include <iostream>
#include <Bits.h>

int main() {
	int a, b, c;
	std::cout << "a, b, c: "; std::cin >> a >> b >> c;

	std::cout << "result: " << (a | b & c) << std::endl;

	return 0;
}