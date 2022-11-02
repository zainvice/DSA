#include <iostream>
using namespace std;
//Using global variables for functions
string* names = new string[5]; //Declaring Array
int choice = 0; //Choice for User
int sizeofarray = 5; //Easier for loops
int sizetracker = 0; //tracks previous size of array
int presize = 0; //Previous size of array
void main_menu() {
 //Main Menu Function
 system("cls"); //Resets the screen
 cout << "\t \t \t ***Main Menu*** \n\t \t \t 1. Store Data \n\t \t \t 2. Show data \n\t \t \t 3.Resize Array \n\t \t \t 4. Exit ";
 cin >> choice;

}
void storingdata() {
 //Storing Data in Array
 char rchoice = 'y';
 if (sizeofarray >= 10) {
 cout << "Do you wish to replace you previous data? Y/N?";
 cin >> rchoice;
 switch (rchoice)
 {
 case 'y':
 for (int i = 0; i < sizeofarray; i++)
 {
 cout << "Enter a value to store " << i + 1 << " value of array: ";
 cin >> names[i];
 }
 break;
 case 'n':
 for (int i = sizetracker; i < sizeofarray; i++)
 {
 cout << "Enter a value to store " << i + 1 << " value of array: ";
 cin >> names[i];
 }
 break;
 }
 }