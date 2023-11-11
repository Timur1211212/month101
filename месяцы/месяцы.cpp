#include <iostream>
using namespace std;

enum class seasons
{
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "rus");
	int number;	
	do {
		std::cout << "Введите номер месяца: ";
		std::cin >> number;

		if (number == 0)
			cout << "До свидания";
		if (number > 12)
			cout << "Не правильно!\n";

		switch (number){

		case (static_cast<int>(seasons::January)):
			cout << "Январь\n";
			break;

		case (static_cast<int>(seasons::February)):
			cout << "Февраль\n";
			break;

		case (static_cast<int>(seasons::March)):
			cout << "Март\n";
			break;

		case (static_cast<int>(seasons::April)):
			cout << "Апрель\n";
			break;

		case (static_cast<int>(seasons::May)):
			cout << "Май\n";
			break;

		case (static_cast<int>(seasons::June)):
			cout << "Июнь\n";
			break;

		case (static_cast<int>(seasons::July)):
			cout << "Июль\n";
			break;

		case (static_cast<int>(seasons::August)):
			cout << "Август\n";
			break;

		case (static_cast<int>(seasons::September)):
			cout << "Сентябрь\n";
			break;

		case (static_cast<int>(seasons::October)):
			cout << "Октябрь\n";
			break;

		case (static_cast<int>(seasons::November)):
			cout << "Ноябрь\n";
			break;

		case (static_cast<int>(seasons::December)):
			cout << "Декабрь\n";
			break;
		}
	} while (number != 0);
}