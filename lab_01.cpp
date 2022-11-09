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
 else if (sizeofarray == 5) {
 cout << "Array Size: " << sizeofarray;
 for (int i = 0; i < sizeofarray; i++)
 {
 cout << "\nEnter a value to store " << i + 1 << " value of array: ";
 cin >> names[i];
 }
 }
}
void showing_data() {
 //Displaying Data of Array
 cout << "Showing data present:";
 for (int i = 0; i < sizeofarray; i++)
 {
 cout << "\n" << i + 1 << ". " << names[i];
 }
}
void resize_array() {
 //Resizing the array

 string* arrayptr = new string[10]; //used for resizing
 for (int i = 0; i < 5; i++) {
 arrayptr[i] = names[i];
 }
 names = arrayptr;
 delete[] arrayptr;
 sizeofarray = presize + 10;
 presize = sizeofarray;
 sizetracker +=5;

 cout << "\t \t \t Size has been increased by 10!";
}
int main()
{
 //Main Menu

 start:
 main_menu();//Goes to main menu function
 switch (choice) //Switch for User Choices
  {
 case 1:
 storingdata();
 cout << "\n\t \t \t \tIt's done! \n\t\ \t \t \tEnter 0 to go Back: ";
 cin >> choice;
 if (choice == 0)
 goto start;
 break;
 case 2:
 showing_data();
 cout << "\n\t \t \t \tIt's done! \n\t \t \t \tEnter 0 to go Back: ";
 cin >> choice;
 if (choice == 0)
 goto start;
 break;
 case 3:
 resize_array();
 cout << "\n\t \t \t \tIt's done! \n\t \t \t \tEnter 0 to go Back: ";
 cin >> choice;
 if (choice == 0)
 goto start;
 break;
 case 4:
 //Exit Case
 delete[] names;

 cout << "Successful deletion save to exit!";
 return 0;
 break;
 }

}