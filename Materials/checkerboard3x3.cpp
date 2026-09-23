
/*
Author: Joaquin
Course: CSCI-135
Instructor:7Tong yi
Assignment: lab4f.

this program prompts the user to input the width and height and itll make a trapezoid
according to the user inputs, before making the shape theres a conditional to make sure
that the user input wrong numbers.
*/

/*
Author: Joaquin
Course: CSCI-135
Instructor:7Tong yi
Assignment: lab4f.

this program prompts the user to input the width and height and itll 
print a checkerboard of 3-by-3 squares.  since we want a checkerboard, theres a
if the i and x are odd or even. if it is odd itll make a space before printing the star
else itll print a *.
*/
#include <iostream>
using namespace std;

int main() {
	int width;
	int height;
	cout << "Enter width: " << endl;
	cout << "Enter height: " << endl;
	cin >> width;
	cin >> height;
	cout << "Shape: " << endl;
	for (int i = 0; i < height; i++){
	    for (int x = 0; x < width; x++){
	        if ((i/3 + x/3) % 2 == 0){
	            cout << "*";
	        }else{
	            cout << " ";
	        }
	    }
	    cout << endl;
	}


	return 0;
}