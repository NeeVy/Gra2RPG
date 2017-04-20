#include <iostream> 
#include <cmath> 
#include <string>
#include <fstream> 
#include <ctime> 
#include <cstdlib>
#include <iomanip> 
#include <algorithm>
#include "JTools.h"
#include <conio.h>
#include "grapostac.h"

using namespace std;

class Map{
	public:
		string data[30];
	public:
		void LoadMainMap(){
			fstream mapFile;
			mapFile.open("mainMap.map");
			for(int i = 0; i < 30; i++){
				mapFile >> data[i];
			}
			
		}
		
		void ShowMap(int posX, int posY){
			system("cls");
			for(int i = 0; i < 30; i++){
				for(int j = 0; j < 50; j++){
					if(data[i][j] == '#')
						SetTextColor(c_green);
					else if(data[i][j] == '@')
						SetTextColor(c_blue);
					else if(data[i][j] == '=')	
						SetTextColor(c_brown);
					else if(data[i][j] == '!' || data[i][j] == 'X' || data[i][j] == 'B')	
						SetTextColor(c_red);
					
					if(i == posY && j == posX){
						SetTextColor(c_white);
						cout << "P ";
					}
					else
						cout << data[i][j] << " ";
				}
				cout << endl;
			}
		}
		
};

Map map;

void Walk(Stachu &player){
	char key;
	key = getch();
	if(key == 'w')
		player.posY++;
	else if(key == 's')
		player.posY--;
	else if(key == 'a')
		player.posX--;
	else if(key == 'd')
		player.posX++;
	else
		return;
	
	map.ShowMap(player.posX, player.posY);
}
