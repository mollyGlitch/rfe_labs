#include <iostream>
#include <string>

int main() {
	int n, r = 0, ld = 0;

	std::cout << "N: "; std::cin >> n;
	ld = n;

	while (ld > 0) {
		r = r * 10 + ld % 10;
		ld /= 10;
	}

	(n == r) ? std::cout << "N is a palnidrome." << std::endl : std::cout << "N is not a palindrome.";

	return 0;
}