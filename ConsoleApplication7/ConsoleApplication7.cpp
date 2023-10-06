#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	int b;
	int c;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	if ((a > 0 && b <= 0 && c <= 0) || (a <= 0 && b > 0 && c <= 0) || (a <= 0 && b <= 0 && c > 0)) {
		std::cout << "Истина";
	}
	else {
		std::cout << "Ложь";
	}
}