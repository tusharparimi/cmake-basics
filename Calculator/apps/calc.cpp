#include "add.hpp"
#include <iostream>

int main()
{
	int x, y;
	std::cout << "Type an integer: ";
	std::cin >> x;
	std::cout << "Type another integer: ";
	std::cin >> y;

	std::cout << "The sum of " << x << " and " << y << " is: " << calculator::add(x, y) << '\n';
	return 0;
}
