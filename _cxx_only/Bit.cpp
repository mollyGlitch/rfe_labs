#include <bitset>
#include <iostream>

int main() {
	signed char n;

	std::cout << "Input (char): "; std::cin >> n;
	std::cout << std::hex <<  "Bit represent of N: " << std::bitset<8>(n) << std::endl;

	std::cout << std::hex << "0, 3, 7 bits of N: " << int(n & 1) << " " << int((n >> 2) & 1) << " " << int((n >> 6) & 1) << std::endl;
	n ^= (1 << 0);
	n ^= (1 << 3);
	n ^= (1 << 7);
	std::cout << std::hex << "N with inverted 0, 3, 7 bits: " << n << std::endl;

	return 0;
}