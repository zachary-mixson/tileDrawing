#include "tileMap.h"

void tileMap::initTileMap() {
	
	// Create and open a text file
	ofstream arrayFile(tileMap::fileName + ".txt");


	//populate the array with zeros
	for (int row = 0; row < tileArrayHeight; row++) {
		for (int column = 0; column < tileArrayWidth; column++) {

			tileArray[row][column] = 0;

		}
	}//end hight loop 

		//write the array to the file
	for (int row = 0; row < tileArrayHeight; row++) {
		for (int column = 0; column < tileArrayWidth; column++) {

			// Write to the file
			arrayFile << tileArray[row][column];

		}
		//end line after columns have printed for that row
		arrayFile << endl;
	}//end hight loop 


		// Close the file
	arrayFile.close();
}

void tileMap::saveTileMap() {

	// Create and open a text file
	ofstream arrayFile(tileMap::fileName + ".txt");

	//write the array to the file
	for (int row = 0; row < tileArrayHeight; row++) {
		for (int column = 0; column < tileArrayWidth; column++) {


			// Write to the file
			arrayFile << tileArray[row][column];

		}
		//end line after columns have printed for that row
		arrayFile << endl;
	}//end hight loop 


	// Close the file
	arrayFile.close();
}









