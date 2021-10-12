#include <iostream>
#include <string>
#include <stdlib.h>

int TCastOne() {
	int n, r = 0, ld = 0;

	std::cout << "N: "; std::cin >> n;
	ld = n;

	while (ld > 0) {
		r = r * 10 + ld % 10;
		ld /= 10;
	}

	(n == r) ? std::cout << "N is a palindrome." << std::endl : std::cout << "N is not a palindrome.";

	return 0;
}

int TCastTwo() {
	double in;
	int k, n, r1 = 0, r2 = 0, c1, c2 = c1 = 0;

	std::cout << "Number: "; std::cin >> in;
	std::cout << "N, K: "; std::cin >> n >> k;
	
	in -= (int)in;
	c1 = int(in * 1000);
	c2 = ((in * 1000) - c1) * 1000;

	std::cout << "C1\tC2" << std::endl;
	std::cout << c1 << "\t" << c2 << std::endl;
	
	while (c1 > 0) { r1 += c1 % 10; c1 /= 10; }
	while (c2 > 0) { r2 += c2 % 10; c2 /= 10; }

	std::cout << "\nR1\tR2" << std::endl;
	std::cout << r1 << "\t" << r2 << std::endl;
	
	(r1 == r2) ? std::cout << "Equal." << std::endl : std::cout << "Not equal." << std::endl;

	return 0;
}

int main() {
	int selection;
	std::cout << "Select subnumber (2.1.X): "; std::cin >> selection;

	system("cls");	
	switch (selection) {
	case 1: TCastOne(); break;
	case 2: TCastTwo(); break;
	default: std::cout << "Wrong selection!"; break;
	}

	return 0;
}