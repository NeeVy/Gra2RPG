#include <iostream> 
#include <cmath> 
#include <string>
#include <fstream> 
#include <ctime> 
#include <cstdlib>
#include <iomanip> 
#include <algorithm>

using namespace std;
class Enemy{
	
	string name;
	int hp;
	int maxHp;
	int strength;œœ
	int exp;
	
	public :
		Enemy(string name, int maxHp, int strength, int exp){
			this -> name = name;
			this -> hp = maxHp;
			this -> maxHp = hp;
			this -> strength;
			this -> exp = exp;
		}
		
		int attack(){
			int dmg;
			dmg = strength + rand()%3-1;
			return dmg;
		}
	
};


int main(){


	return 0;
}

