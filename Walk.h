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
		
		void ShowMap(Stachu &player){
			system("cls");
			
			for(int i = 0; i < 20; i++){
				for(int j = 0; j < 30; j++){
					if(data[i][j] == '#' && lastColor != c_green){
						SetTextColor(c_green);
						lastColor = c_green;
					}
					else if(data[i][j] == '@' && lastColor != c_blue){
						SetTextColor(c_blue);
						lastColor = c_blue;					
					}
					else if(data[i][j] == '=' && lastColor != c_brown){
						SetTextColor(c_brown);
						lastColor = c_brown;
					}
					else if(data[i][j] == '!' || data[i][j] == 'X' || data[i][j] == 'B'){
						SetTextColor(c_red);
						lastColor = c_red;
					}
					if(i == player.posY && j == player.posX){
						SetTextColor(c_white);
						cout << "P ";
						lastColor = c_white;
					}
					else
						cout << data[i][j] << " ";
				}
				cout << endl;
			}
		}
		private:
			Color lastColor = c_white;
};

Map map;

void Walk(Stachu &player){
	int lastPosX = player.posX;
	int lastPosY = player.posY;
	
	char key;
	key = getch();
	
	if(key == 'w')
		player.posY--;
	else if(key == 's')
		player.posY++;
	else if(key == 'a')
		player.posX--;
	else if(key == 'd')
		player.posX++;
	else
		return;
	

	
	if(player.posX < 0 || player.posY < 0 || player.posY >= 20 || player.posX >= 30 ||
		map.data[player.posY][player.posX] == '@' ||
		map.data[player.posY][player.posX] == '^'){
		
		player.posX = lastPosX;
		player.posY = lastPosY;
	}
	else
		map.ShowMap(player);
}
