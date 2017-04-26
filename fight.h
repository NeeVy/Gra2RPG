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
#include "gameEnemy.h"
#include "grapostac.h"
#include "JTools.h"

using namespace std;

Enemy *enemy_1 = new Enemy("Dziewczyna", 69, 3, 100); 

void ShowAnimation(){
	
}

void StartAnim(){
	cout << "";
	cout << "";
	cout << "";
	cout << "";
	cout << "";
	cout << "";
	cout << "";
	cout << "";
	cout << "";
	cout << "";
	cout << "";
	cout << "";
	cout << "";
	cout << "";
	
}

void EndAnim(){
	
}

void StartFight(Stachu player, Enemy enemy){
	
	do{
		system("cls");
		cout<<player.name<<setw(3) <<player.lvl << " LVL" ;
		SetTextColor(c_red);
		cout << setfill(' ') << setw(40-player.name.length()) << enemy.name << endl;
		SetTextColor(c_white);
		getch();
		StartAnim();
	}
	while(player.hp > 0 && enemy.hp > 0);
	
}

