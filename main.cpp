/*
I read and accept the submission rules and the extra rules specified in each question. This is my own work that
is done by myself only
Celine Sezer - 2453538
*/

#include"Address.h"

using std::cout;
using std::cin;
using std::ostream;
using std::istream;

int main(){
	int exit = 1;
	char option[2];
	int length, i;
	
	Address A1;
	Address A2;
	Address A3;
	
	cout << "CNG 242 Assignment 3";
	cout << "\nCeline Sezer - 2453538";
	cout << "\nWelcome to my solution for assignment 3";
	
	//In this part I am assigning the hexadecimal values that user entered to each address, if the entered address is invalid, it asks for
	//another entry inside the >> operator's overloader
	cout << "\n------------------------------------------------------\n";
	cout << "\nFor A1:";
	cout << "\nPlease enter Address in Hexadecimal,\nseperated with ':' every 4 digits: \n";
	cin >> A1;
	cout << "\nSuccessfully created!";
	
	cout << "\n------------------------------------------------------\n";
	cout << "\nFor A2:";
	cout << "\nPlease enter Address in Hexadecimal,\nseperated with ':' every 4 digits: \n";
	cin >> A2;
	cout << "\nSuccessfully created!";
	cout << "\n------------------------------------------------------\n";
	
	while (option[0] != 0){
		
		cout << "a. Change first address(A1)\n";
		cout << "b. Change second address(A2)\n";
		cout << "1. Print the result of classification\n";
		cout << "2. Print TLA ID\n";
		cout << "3. Print NLA ID\n";
		cout << "4. Print SLA ID\n";
		cout << "5. Bitwise disjunction\n";
		cout << "6. Bitwise conjunction\n";
		cout << "7. Bitwise NOR\n";
		cout << "8. Bitwise NAND\n";
		cout << "9. Bitwise XOR\n";
		cout << "10. Bitwise XNOR\n";
		cout << "11. Copy Constents of first address to another\n";
		cout << "12. Compare if A1 == A2\n";
		cout << "13. Compare if A1 != A2\n";
		cout << "14. Print address\n";
		cout << "15. Enter an address\n";
		cout << "0. Exit\n";
		cout << "Please Select: ";
		cin >> option;
		
		if (strlen(option) == 1){
			
			if (option[0] == 'a'){
				cout << "\nFor A1:";
				cout << "\nPlease enter Address in Hexadecimal,\nseperated with ':' every 4 digits: \n";
				//I am calling overload operator of >>
				cin >> A1;
				cout << "\nSuccessfully created!\n";				
			}
			
			else if (option[0] == 'b'){
				cout << "\nFor A2:";
				cout << "\nPlease enter Address in Hexadecimal,\nseperated with ':' every 4 digits: \n";
				//I am calling overload operator of >>
				cin >> A2;
				cout << "\nSuccessfully created!\n";
			}
			
			else if (option[0] == '1'){

				cout << "\nPlease enter 1 for A1, 2 for A2: ";
				cin >> option;
				
				if (option[0] == '1'){
					cout << "Classification for A1 is: ";
					//I am calling overload operator of ~
					(~A1);
				}
				
				else {
					cout << "Classification for A2 is: ";
					//I am calling overload operator of ~
					(~A2);
				}
				
				cout << "\n";	
			}
			
			else if (option[0] == '2'){
				cout << "\nPlease enter 1 for A1, 2 for A2: ";
				cin >> option;
				
				if (option[0] == '1'){
					cout << "\nTLA ID of A1\n";
					//I am calling overload operator of !
					(!A1);
				}
				
				else {
					cout << "\nTLA ID of A2\n";
					//I am calling overload operator of !
					(!A2);
				}
			}
			
			else if (option[0] == '3'){
				cout << "\nPlease enter 1 for A1, 2 for A2: ";
				cin >> option;
				
				if (option[0] == '1'){
					cout << "\nNLA ID of A1\n";
					//I am calling overload operator of ++
					(++A1);
				}
				
				else {
					cout << "\nNLA ID of A2\n";
					//I am calling overload operator of ++
					(++A2);
				}
			}
			
			else if (option[0] == '4'){
				cout << "\nPlease enter 1 for A1, 2 for A2: ";
				cin >> option;
				
				if (option[0] == '1'){
					cout << "\nSLA ID of A1\n";
					//I am calling overload operator of &
					(&A1);
				}
				
				else {
					cout << "\nSLA ID of A2\n" << (&A2);
					//I am calling overload operator of &
					
				}
			}
			
			else if (option[0] == '5'){
				//I am calling overload operator of +
				cout << "\nResult of A1 + A2;\n" << (A1+A2);
			}
			
			else if (option[0] == '6'){
				//I am calling overload operator of *
				cout << "\nResult of A1 * A2;\n" << (A1*A2);
			}
			
			else if (option[0] == '7'){
				//I am calling overload operator of -
				cout << "\nResult of A1 - A2;\n" << (A1-A2);
			}
			
			else if (option[0] == '8'){
				//I am calling overload operator of /
				cout << "\nResult of A1 / A2;\n" << (A1/A2);
			}
			
			else if (option[0] == '9'){
				//I am calling overload operator of %
				cout << "\nResult of A1 % A2;\n" << (A1%A2);
			}
			
			else if (option[0] == '0'){
				cout << "\nGoodbye!\n";
				break;
			}
		}
		
		else{
			
			if (option[0] == '1' && option[1] == '0'){
				//I am calling overload operator of ^
				cout << "\nResult of A1 ^ A2;\n" << (A1^A2);	
			} 
			
			else if (option[0] == '1' && option[1] == '1'){
				cout << "\nCreating a new object (A3)!\n";
				cout << "A3 is created!";
				
				cout << "\nContents of A3:\n";
				cout << A3;
				
				//I am calling overload operator of =
				(A3=A1);
				cout << "\nAfter A3 = A1;";
				cout << "\nContents of A3:\n";
				//I am calling overload operator of <<
				cout << A3;
				
				cout << "\nContents of A1:\n";
				//I am calling overload operator of <<
				cout << A1;	
			} 
			
			else if (option[0] == '1' && option[1] == '2'){
				cout << "\nResult of A1 == A2: ";
				//I am calling overload operator of ==
				(A1==A2);
			}
			
			else if (option[0] == '1' && option[1] == '3'){
				cout << "\nResult of A1 != A2: ";
				//I am calling overload operator of !=
				(A1!=A2);
			}
			
			else if (option[0] == '1' && option[1] == '4'){
				cout << "\nPlease enter 1 for A1, 2 for A2: ";
				cin >> option;
				
				if (option[0] == '1'){
					//I am calling overload operator of <<
					cout << A1;
				}
				
				else {
					//I am calling overload operator of <<
					cout << A2;
				}
			}
			
			else if (option[0] == '1' && option[1] == '5'){
				cout << "\nPlease enter 1 for A1, 2 for A2: ";
				cin >> option;
				
				if (option[0] == '1'){
					cout << "\nFor A1:";
					cout << "\nPlease enter Address in Hexadecimal,\nseperated with ':' every 4 digits: \n";
					//I am calling overload operator of >>
					cin >> A1;
				}
				
				else {
					cout << "\nFor A2:";
					cout << "\nPlease enter Address in Hexadecimal,\nseperated with ':' every 4 digits: \n";
					//I am calling overload operator of >>
					cin >> A2;
				}
				
				cout << "\nSuccessfully created!\n";
			}
		
			cout << "\n";
		}
		
		cout << "------------------------------------------------------\n";
	}
	
	return 0;
}
