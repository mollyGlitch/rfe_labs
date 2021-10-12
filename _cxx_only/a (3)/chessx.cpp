#include <iostream>

int main() {
	bool v, h, d;
	int k, l, m, n;

	std::cout << "K, L: "; std::cin >> k >> l;
	std::cout << "M, N: "; std::cin >> m >> n;

	((l == n) && (m < k || m > k)) ? h = true : h = false;
	((m == k) && (l > n || l < n)) ? v = true : v = false;

	(((k >= 1) || (l >= 1)) || (((labs(m - k) == 1) || (labs(n - l) == 1)))) ? d = true : d = false;
	((labs((k - m) + (l - n)) <= 2) || ((labs(k - m) <= 1) || (labs(l - n) <= 1))) ? d = true : d = false;
	(labs(m - k) == labs(n - l)) ? d = true : d = false;

	(h || v || d) ? std::cout << "Queen in danger." : std::cout << "Queen is safe.";
}