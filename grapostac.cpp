#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <windows.h>
#include <cstdio>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <conio.h>

using namespace std;

class Stachu{
	public:
		
	string name;
	int strength;
	int maxhp;
	int hp;
	int lvl;
	int exp;
	int maxexp;
	
	Stachu(string name, int strength, int maxhp){
		this -> name = name;
		this -> strength = strength;
		this -> maxhp = maxhp;
		this -> hp = maxhp;
		this -> lvl = 1;
		this -> exp = 0;
		this -> maxexp = 100;
	}
	
	void AddExp(int amount){
		exp += amount;
		lvlup();
	}
	
	int attack(){
		int dmg;
		dmg = strength + rand()%7-3;
		return dmg; 
	}
	
	void ShowStats(){
		cout<<"HP: "<<hp<<"/"<<maxhp<<"\t"<<name<<" | "<<lvl<<" lvl "<<" | "<<exp<<"/"<<maxexp<<" exp"<<endl;
	}
	
	//==========================================
	private:
		
	void lvlup(){

		
		if(exp >= maxexp){
			lvl++;
			exp = 0;
			maxexp += 100;
			ShowLvlUpUi(4);
		}

	}
	
	void ShowLvlUpUi(int points){
		system("cls");
		cout << setfill('-') << setw(20) << "-\n";
		cout << "[1] HP - " << maxhp << endl;
		cout << "[2] Strength - " << strength << endl;
		cout << setfill('-') << setw(20) << "-\n";
		if(points==0){
			return;
		}
		char c;
		c = getch();
		
		switch(c){
			case '1':{
				maxhp+=20;
				hp+= 20;
				ShowLvlUpUi(points-1);
				break;
			}
			case '2':{
				strength+=1;
				ShowLvlUpUi(points-1);
				break;
			}
			default:{
				ShowLvlUpUi(points);
				break;
			}
		}
		
	}
};

int main()
{
	Stachu p("Stachu", 1 ,100);
	p.AddExp(0);
	p.ShowStats();
}

