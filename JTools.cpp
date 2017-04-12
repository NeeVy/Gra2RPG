#include <iostream> 
#include <cmath> 
#include <string>
#include <fstream> 
#include <ctime> 
#include <cstdlib>
#include <iomanip> 
#include <algorithm>

using namespace std;

enum Color{
	c_red = 12,
	c_blue = 9,
	c_green = 10,
	c_dGreen = 2,
	c_white = 15,
	c_yellow = 14
};

void SetTextColor(int color){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
}
