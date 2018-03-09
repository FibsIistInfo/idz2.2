#include <iostream>
#include<ctime>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Date{
	int Year; // год
	int Month; // мес€ц
	int Day; // день

	// изменение даты с помощью функции члена
	void setDate(int Day, int Month, int Year);
	
	void output(); // TODO: определить функцию самосто€тельно
	
	// конструктор по умолчанию
	Date();
	// конструктор с параметрами
	Date(int Day, int Month, int Year);
	
	
};

// изменение даты с помощью функции члена
void Date::setDate(int Day, int Month, int Year)
{
	this->Year = Year;
	this->Month = Month;
	this->Day = Day;
}
	
// конструктор по умолчанию
Date::Date()
{
	this->Year = 0;
	this->Month = 0;
	this->Day = 0;
	cout << "Input date" << endl << "Day: ";
	cin >> this->Day;
	cout << "Month: ";
	cin >> this->Month;
	cout << "Year: ";
	cin >> this->Year;
}

// конструктор с параметрами
Date::Date(int Day, int Month, int Year)
{
	this->setDate(Day, Month, Year);
}



int main(int argc, char** argv) {
	
	
	return 0;
}


