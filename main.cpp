#include <iostream>
#include<ctime>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Date{
	int Year; // ���
	int Month; // �����
	int Day; // ����

	// ��������� ���� � ������� ������� �����
	void setDate(int Day, int Month, int Year);
	
	void output(); // TODO: ���������� ������� ��������������
	
	// ����������� �� ���������
	Date();
	// ����������� � �����������
	Date(int Day, int Month, int Year);
	
	
};

// ��������� ���� � ������� ������� �����
void Date::setDate(int Day, int Month, int Year)
{
	this->Year = Year;
	this->Month = Month;
	this->Day = Day;
}
	
// ����������� �� ���������
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

// ����������� � �����������
Date::Date(int Day, int Month, int Year)
{
	this->setDate(Day, Month, Year);
}



int main(int argc, char** argv) {
	
	
	return 0;
}


