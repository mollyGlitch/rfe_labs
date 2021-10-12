#include <iostream>
#include <math.h>

int main() {
	double a, b, c, d, e, f, g, h;

	std::cout << "Input (a-h): "; std::cin >> a >> b >> c >> d >> e >> f >> g >> h;

	// Line: (e,f)(g,h)
	double link = (e - g) / (f - h),
		linb = (g * f - e * h) / (e - g),
		lineq = link * (e - f) + linb;

	bool nHemiBelong;

	((a * a + b * b) != (c * c + d * d)) ? nHemiBelong = true : nHemiBelong = false;

	nHemiBelong ? std::cout << "No, (a,b) and (c,d) not in the same area" << std::endl : std::cout << "Yes, (a,b) and (c,d) in the same area" << std::endl;

	return 0;
}