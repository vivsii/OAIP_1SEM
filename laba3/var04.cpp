#include <iostream>
int main()
{
	float p, q, t = 6, y = -1.2, x = 0.4e6;
	p= 2.6 * t + cos(y / (3 * x + y));
	q = sin(t) / cos(t);
	std::cout << "p=" << p << std::endl;
	std::cout << "q=" << q << std::endl;
	return 0;
}
