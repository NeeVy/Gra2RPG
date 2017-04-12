#include <iostream> 
#include <cmath> 
#include <string>
#include <fstream> 
#include <ctime> 
#include <cstdlib>
#include <iomanip> 
#include <algorithm>
#include "JTools.cpp"

using namespace std;

class Map{
	public:
		string data[30];
	
		void LoadMainMap(){
			fstream mapFile;
			mapFile.open("mainMap.map");
			for(int i = 0; i < 30; i++){
				mapFile >> data[i];
			}
			
		}
		
		void ShowMap(){
			for(int i = 0; i < 30; i++){
				for(int j = 0; j < 50; j++){
					if(data[i][j] == '#')
						SetTextColor(c_green);
					else if(data[i][j] == '@')
						SetTextColor(c_blue);
					else if(data[i][j] == '=')	
						SetTextColor(c_brown);
					else if(data[i][j] == '!')	
						SetTextColor(c_red);
						
					cout << data[i][j] << " ";
				}
				cout << endl;
			}
		}
		
};

