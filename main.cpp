#include <iostream>
#include <fstream>
using namespace std;
#include "tileMap.h"


int main() {

	tileMap map("filename");

	map.initTileMap();


	map.saveTileMap();





	return 0;
}