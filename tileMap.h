#pragma once
#include <iostream>
#include <fstream>
using namespace std;


class tileMap {

public:
	tileMap(string fileName) {
		this->fileName = fileName;
	}

	string fileName;

	void initTileMap();

	void saveTileMap();

private:

	//create a 2d array
	int tileArrayHeight = 20;
	int tileArrayWidth = 20;
	int tileArray[20][20];


};






