#include <iostream>

int main() {
	int k, l, m, n, x, y;
	bool hMove, vMove, dMove;
	bool h2Move, v2Move, d2Move = v2Move = h2Move = false;

	for (int dr = 0; dr <= 16; dr++) { if (dr % 2 == 0) { std::cout << "  +===+===+===+===+===+===+===+===+" << std::endl; } else { std::cout << ((16 - dr + 1) / 2) << " !   !   !   !   !   !   !   !   !" << std::endl; } }
	std::cout << "    1   2   3   4   5   6   7   8" << std::endl;

	std::cout << "Start (X, Y): "; std::cin >> k >> l;
	std::cout << "Target (X, Y): "; std::cin >> m >> n;

	(l == n && m != k) ? hMove = true : hMove = false; // a-h
	(m == k && l != n) ? vMove = true : vMove = false; // 1-8
	(((k >= 1) || (l >= 1)) || (((labs(m - k) == 1) || (labs(n - l) == 1)))) ? dMove = true : dMove = false; // 1,1 -> 8,8 
	(sqrt(labs((k * k - m * m))) >= sqrt(labs((l * l - n * n)))) ? dMove = true : dMove = false; // 3,4 -> 1,6
	(labs(k - m) == labs(l - n)) ? dMove = true : dMove = false;

	while (!(h2Move || v2Move)) {
		if (labs(k - m) < labs(l - n)) { x = k; y = labs(l - n); }
		if (labs(k - m) >= labs(l - n)) { x = labs(k - m); y = l; }
		(x == k && y != labs(k - m)) ? h2Move = true : h2Move = false;  
		(x == l && y != labs(l - n)) ? v2Move = true : v2Move = false; 
		// (((x >= 1) || (y >= 1)) || (((labs(m - x) == 1) || (labs(n - y) == 1)))) ? d2Move = true : d2Move = false; // 1,1 -> 8,8 
		// (sqrt(labs((x * x - m * m))) >= sqrt(labs((y * y - n * n)))) ? d2Move = true : d2Move = false; // 3,4 -> 1,6
		// (labs(x - m) == labs(y - n)) ? d2Move = true : d2Move = false;
	}

	std::cout << labs(m - k) << "\t" << labs(n - l) << "\t" << (labs(l - n) < labs(m - k)) << "\t" << (x == k && y != labs(k - m)) << "\t" << (x == l && y != labs(l - n)) << std::endl;

	(hMove || vMove || dMove) ? std::cout << "Can move (" << k << ", " << l << ") -> (" << m << ", " << n << ") in 1 turn." << std::endl : std::cout << "Can't move (" << k << ", " << l << ") -> (" << m << ", " << n << ") in 1 turn." << std::endl;
	(h2Move || v2Move || d2Move) ? std::cout << "Can move (" << k << ", " << l << ") -> (" << m << ", " << n << ") in 2 turns." << std::endl : std::cout << "Can't move (" << k << ", " << l << ") -> (" << m << ", " << n << ") in 2 turns." << std::endl;

	return 0;
}