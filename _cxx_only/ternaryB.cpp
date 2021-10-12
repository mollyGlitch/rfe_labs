#include <iostream>

int main() {

	double x1, x2, x3, x4, rpl = 0;
	std::cout << "X1, X2, X3, X4: "; std::cin >> x1 >> x2 >> x3 >> x4;

	/* Сортировка выражением "если... то" с использованием цикла с пост-условием do{...}while(...);
	* 
	do {
		if (x1 > x2) {rpl = x1; x1 = x2; x2 = rpl; }
		if (x2 > x3) {rpl = x2; x2 = x3; x3 = rpl; }
		if (x3 > x4) {rpl = x3; x3 = x4; x4 = rpl; }
	} 	while (x1 > x2 || x2 > x3 || x3 > x4);
	*/

	/* Сортировка условным оператором
	* 
	(x1 > x2 || x2 > x3 || x3 > x4) ?
		(x1 > x4) ? rpl = x1, x1 = x4, x4 = rpl : rpl = 0,
		(x2 > x4) ? rpl = x2, x2 = x4, x4 = rpl : rpl = 0,
		(x3 > x4) ? rpl = x3, x3 = x4, x4 = rpl : rpl = 0 : rpl = 0;
	*/
	std::cout << x1 << " < " << x2 << " < " << x3 << " < " << x4;

}