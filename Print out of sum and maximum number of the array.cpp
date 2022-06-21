// Print out of sum and maximum number of the array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main(){
	int minNum = 0;
	
	int sum = 0;
	
	int myNum[4]{ 4,6,7,20 };
	cout << " The numbers in the array " << endl;
	for (int i = 0; i < 4; i++) {
		cout << myNum[i] << " ";
		sum += myNum[i];

	}
	cout << endl;
	cout << " The sum is equals to: " << sum;
	cout << endl;
	for (int j = 0; j< 1; j++) {
		

		if (myNum[j] < minNum) {
			minNum = myNum[0];
					
		}
		cout << " The minimum number is equals to : " << myNum[j];		

	}
		
	
	return 0;
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
