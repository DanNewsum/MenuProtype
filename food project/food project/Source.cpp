#include "Store.h"
#include"Chipotle.h"
#include "King.h"
#include "McDonalds.h"
#include "Qudoba.h"
using namespace std;
int main() {
	int choice,quant;
	string select;

	cout << "Hello" << endl << "Please select from one of the options below" << endl << "1) McDonalds" << endl << "2) Burger King" << endl << "3) Chipotle" << endl << "4) Qudoba" << endl;
	cin >> choice;
	if (choice == 1){
		M_face();// calls McDonalds menu and other functions
	}
	else if (choice == 2) {
		K_face();//calls Burger King menu and other functions 

	}
	else if (choice == 3) {
		C_face();//calls Chipotle and menu and other function
	}
	else if (choice == 4) {
		Q_face();//calls the Qudoba menue and other functions 
	}
	else
	{
		cout << "NO" << endl;
	}
}