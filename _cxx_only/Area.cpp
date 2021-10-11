#include <iostream>

int main() {
	double R1, R2, x, y;

	std::cout << "Enter X, Y: "; std::cin >> x >> y;
	std::cout << "Enter radius (R1, R2): "; std::cin >> R1 >> R2;
	
	double x2 = x * x, y2 = y * y, r2s = R2 * R2, r1s = R1 * R1; // square values

	bool q2r = x2 + y2 <= r2s;			// Circle (R2)
	bool q1r = x2 + y2 <= r1s;			// Circle (R1)
	bool xq = (x >= -R2 && x <= 0);		// -R2 <= x <= 0
	bool yq = (y <= R2 && y >= 0);		// 0 <= y <= R2
	bool r12x = (x <= R1 && x >= R2);	// R2 <= x <= R1
	bool r12y = (y <= -R1 && y >= -R2); // -R1 <= y <= -R2
	
	((q2r && xq && yq) || (q1r && r12x && r12y)) ? std::cout << "True" : std::cout << "False";
	std::cout << "\n" << q1r << " " << q2r << " " << xq << " " << yq << std::endl;

	return 0;
}