#include <iostream>

using namespace std;

int main(){
	int R, C, CS, W;
	char SC;	
	
	// get all parameters from user
	cin >> R >> C >> SC >> CS >> W;
	
	// check for few arguments or if not a number
	if ((cin.eof())){
		cerr << "usage: checkerboard  - stdin should contain R, C, SC, CS and W" << endl;
	}
	// make sure all parameters are higher than 0
	if (R <= 0 || C <= 0 || SC <= 0 || CS <= 0 || W <= 0){
		return 0;
	}
	
	//check SC + CS is > 127	
	if ((SC + CS) > 127){
		return 0;
	}

	// nested for loops to create checkerboard
	// for row
	for (int i = 0; i < R; i++){
		// for duplicate characters in a row
		for (int k = 0; k < W; k++){
			// for column
			for (int j = 0; j < C; j++){
				// for duplicate characters in a column 
				for (int m = 0; m < W; m++){
					// type casted to char to convert from int -> char
					cout << char (SC + (i + j) % CS);
				}
			}	
		cout << endl;
		}
	}
	return 0; // like a good programmer :)
}
