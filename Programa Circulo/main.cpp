#include <iostream>
#include <cmath>

int main()
{
	const double pi = 3.1416;
	double radio;
	std::cout << "Ingresa el radio del circulo: ";
	std::cin >> radio;
	std::cout << "---------------------------------" << std::endl;
	std::cout << "- El area del circulo es: " << pi * pow(radio, 2) << std::endl;
	std::cout << "- El perimetro del circulo es: " << 2 * pi * radio << std::endl;
	std::cout << "---------------------------------" << std::endl;
	return 0;
}