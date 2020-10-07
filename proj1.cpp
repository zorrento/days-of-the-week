#include <iostream>
#include <Windows.h>
using namespace std;
#define KEY_DOWN(vk_code) ((GetAsyncKeyState(vk_code) & 0x8000) ? 1 : 0)	

void PrintDay(const unsigned int);

int main()
{
	cout << "************************************************************\n" 
	<<"This programm may help You to learn days of the week in English\n"
	<< "Just enter a number in [1,7] and get correspondence with the day of the week on the screen.\n"
	<< "Press Esc to Quit and keep in mind 1 is MONDAY\n\n";
	while (1)
	{
		if (KEY_DOWN(VK_ESCAPE))
			break;
		if (KEY_DOWN(49))
			PrintDay(49);
		if (KEY_DOWN(50))
			PrintDay(50);
		if (KEY_DOWN(51))
			PrintDay(51);
		if (KEY_DOWN(52))
			PrintDay(52);
		if (KEY_DOWN(53))
			PrintDay(53);
		if (KEY_DOWN(54))
			PrintDay(54);
		if (KEY_DOWN(55))
			PrintDay(55);
	}
	system("PAUSE");
	return 0;
}

void PrintDay(const unsigned int iday)
{
	switch(iday)
	{
		case 49: system("cls"); cout << "Monday"; break;
		case 50: system("cls"); cout << "Tuesday"; break;
		case 51: system("cls"); cout << "Wednesday"; break;
		case 52: system("cls"); cout << "Thursday"; break;
		case 53: system("cls"); cout << "Friday"; break;
		case 54: system("cls"); cout << "Saturday"; break;
		case 55: system("cls"); cout << "Sunday"; break;
	}
	cout << endl;
}