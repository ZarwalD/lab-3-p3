#include <iostream>
#include <clocale>
#include <cmath>

/**
 *
 * @brief Нахождение значения выражения кусочной функции
 * 
 * @return 0
 * 
**/

int main()
{
	setlocale(LC_ALL, "ru");
	float a, b, x;
	std::cout << "Введите а: ";
	std::cin >> a;
	std::cout << "Введите b: ";
	std::cin >> b;
	std::cout << "Введите x: ";
	std::cin >> x;
	float f;
	if (x < -2.45)
	{
		f = b - powf(x, 2) - 1;
		std::cout << "f(x) = " << f << std::endl;
	}
	else if (x >= -2.45 && x < 5)
	{
		f = powf(cosf(a * powf(x, 2) + 3), 2);
		std::cout << "f(x) = " << f << std::endl;
	}
	else if (x >= 5)
	{
		f = sqrtf(logf(x + a));
		std::cout << "f(x) = " << f << std::endl;
	}
	else
	{
		std::cout << "x не входит ни в один заданный диапазон" << std::endl;
	}
}