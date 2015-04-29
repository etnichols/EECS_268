/**
*	@file : Main.cpp
*	@author : Evan Nichols
*	@date : 2015.2.5
*	Purpose: Main.cpp is a driver for the LinkedList and Node classes, giving users a 			 set of options to interact with a LinkedList. 
*/

#include <iostream>
#include "LinkedList.h"
#include "Node.h"


//printMenu helper method
void printMenu() {

std::cout << "Select from the following menu:\n"
		<< "1) Add to the front of the list\n"
		<< "2) Add to the end of the list\n"
		<< "3) Remove from front of the list\n"
		<< "4) Remove from back of the list\n"
		<< "5) Print the list\n"
		<< "6) Search for value\n"
		<< "7) Exit\n"
		<< "Enter your choice: ";
};


//MAIN METHOD
int main () {

LinkedList myLink;

//instantiate new LinkedList object
myLink= LinkedList();

int choice = 0;
int user_value;

	while(choice != 7) {
	
printMenu();
std::cin >> choice;
std::cout << " You chose: " << choice << "\n";

		if(choice == 1) {

			std::cout << "Input a value to add: ";
			std::cin >> user_value;
			std::cout << "Adding " << user_value << " to the list \n \n";

			myLink.addFront(user_value);

		}

		else if (choice == 2) {

			std::cout << "Input a value to add: ";
			std::cin >> user_value;
			std::cout << "Adding " << user_value << " to the list \n \n";

			myLink.addBack(user_value);

		}

		else if (choice == 3) {

			std::cout << "Attempting removal from front of list. \n \n";
			myLink.removeFront();

		}

		else if (choice == 4) {

			std::cout << "Attempting removal from back of list. \n \n";
			myLink.removeBack();

		}

		else if (choice == 5) {

			myLink.printList();
			std::cout << "\n \n";

		}

		else if (choice == 6) {
		
		int search_value;
		bool found;

		std::cout << "Enter a value to search for: \n";
		std::cin >> search_value;
		std::cout << "Searching for " << search_value << ".... ";

		found = myLink.search(search_value);

			if(found == true) {
			std::cout << search_value << " is in the list \n \n";
			}
			else {
			std::cout << search_value << " is not in the list \n \n";
			} 
	
		}
		else if (choice == 7) {
			std::cout << "Exiting....\n";
		}
	
	}//end while

return(0);
}//end main
