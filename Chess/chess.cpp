#include <iostream>

int main() {
	int k, l, m, n, x(0), y(0);
	bool hMove, vMove, dMove, h2Move(0), v2Move(0), d2Move(0);

	for (int dr = 0; dr <= 16; dr++) { if (dr % 2 == 0) { std::cout << "  +===+===+===+===+===+===+===+===+" << std::endl; } else { std::cout << ((16 - dr + 1) / 2) << " !   !   !   !   !   !   !   !   !" << std::endl; } }
	std::cout << "    1   2   3   4   5   6   7   8" << std::endl;

	std::cout << "Start (X, Y): "; std::cin >> k >> l;
	std::cout << "Target (X, Y): "; std::cin >> m >> n;

	(l == n && m != k) ? hMove = true : hMove = false; // Horizontal queen movesment
	(m == k && l != n) ? vMove = true : vMove = false; // Vertical queen movement
	(((k >= 1) || (l >= 1)) || (((labs(m - k) == 1) || (labs(n - l) == 1)))) ? dMove = true : dMove = false; // idk what is this honestly
	(sqrt(labs((k * k - m * m))) >= sqrt(labs((l * l - n * n)))) ? dMove = true : dMove = false; // please help me
	(labs(k - m) == labs(l - n)) ? dMove = true : dMove = false; // Straight diagonal move

	(hMove || vMove || dMove) ? std::cout << "Can move (" << k << ", " << l << ") -> (" << m << ", " << n << ") in 1 turn." << std::endl : std::cout << "Can't move (" << k << ", " << l << ") -> (" << m << ", " << n << ") in 1 turn." << std::endl;

	return 0;
}