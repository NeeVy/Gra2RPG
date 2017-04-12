#include <iostream> 
#include <cmath> 
#include <string>
#include <fstream> 
#include <ctime> 
#include <cstdlib>o
#include <iomanip> 
#include <algorithm>
#include "gameEnemy.cpp"
#include "grapostac.cpp"
#include "Walk.cpp"

using namespace std;

int main(){
	Map map;
	
	map.LoadMainMap();
	map.ShowMap();
	return 0;
}

