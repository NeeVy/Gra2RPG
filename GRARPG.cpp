#include "gameEnemy.h"
#include "Walk.h"
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

int main(){
	Stachu player("Stachu", 3, 100);
	
	map.LoadMainMap();
	map.ShowMap(player);
	while(true){
		Walk(player);
	}
	return 0;
}

