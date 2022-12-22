//Binary & Linear Search
#include<iostream>
#include <chrono>
using namespace std::chrono; //Used for measuring time for binary & linear search
//Note Array size will matter for time taken by binary & linear search
int size = 1000;
int* arr = new int [1000];//Global Variable for Array Storage

void show_data() {
    //Show data function for the array
    std::cout << "\nArray Content: ";
    for (int i = 0; i < size; i++) //Loop for showing values to the user
    {
        std::cout << arr[i] << " ";
    }
}
void store_data() {
    //Store data function for the array
    char choice; //Giving user to choose to enter number manually or automatically
    std::cout << "\nDo you want to enter array manually or automatically remember array size is " << size << " Yes for automatically Y/N? :"; std::cin >> choice;
    if (choice == 'Y'||choice == 'y') {
        int num;//either odd or even from user choice
        std::cout << "\nDo you want array to be odd or even, enter a number to start from : "; std::cin >> num;
       
            if (num % 2 == 0)
            {
                for (int i = 0; i < size; i++) //Loop for storing even value for the user
                {

                    arr[i] = num;
                    num += 8;
                }
            }
            else if (num % 2 != 0)
            {
                for (int i = 0; i < size; i++)//Loop for storing even value for the user
                {

                    if (num % 2 == 0) {
                        arr[i] = num;
                        num += 9;
                    }
                    else if (num % 2 != 0) {
                        arr[i] = num;
                        num += 8;
                    }
                }
            }

    
        std::cout << "Data succesfully Added ";
    }
    else {
        for (int i = 0; i < size; i++) //Loop for storing value from the user
        {
            std::cout << "Enter value " << i + 1 << " of array : "; std::cin >> arr[i];

        }
    }
}
void binary_search() {
    //Binary search for the array
    int num;
    std::cout << "\n Enter a number to search "; std::cin >> num; //Getting number to search from the user
    int first = 0; //Staring of the array index
    int last = size - 1; //End of the array index
    bool found = false; //Used to efficiently break the loop when value is found
    int middle;
    int position = -1; //Postion of the value of array if not found couts -1
    auto start = high_resolution_clock::now();//Starting clock
    while (first <= last && !found) { //Loop to find the number from user 
        middle = (first + last) / 2;
        if (arr[middle] == num) //Logic to verify the number exists in the middle of the loop 
        {
            found = true;
            position = middle;
        }
        else if (arr[middle] > num) { //Changing last to middle decrement of the loop 
            last = middle - 1;
        }
        else //Changing first to middle increment of the loop 
            first = middle + 1;

    }
    auto stop = high_resolution_clock::now();//Ending clock
    auto duration = duration_cast<microseconds>(stop - start); //Measuring time
    std::cout << "Your number is at postion: " << position + 1<<" And Time Taken was : ";
    std::cout << duration.count() << " mic sec";//Returning Postion of their number and time taken by loop
}

void linear_search() {
    //Linear search for the array
    int num; //Used to get number form user
    std::cout << "\n Enter a number to search "; std::cin >> num;//Getting number to search from the user
    int index = 0;
    int position = -1;//Postion of the value of array if not found couts -1
    bool found = false;//Used to efficiently break the loop when value is found
    auto start = high_resolution_clock::now();
    while (index < size && !found) {//Loop to find the number from user 
        
        if (arr[index] == num) //Checks incremently if number is found
        {
            found = true;
            position = index;
        }

        index++;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    std::cout << "Your number is at postion: " << position + 1 << " And Time Taken was : ";
    std::cout << duration.count() << " mic sec";//Returning Postion of their number and time taken by loop
}
void menu(){
    //Main Menu for the user
    std::cout << "\n\n\n\n\t\t\t\t\t   Choose any option! \n\t\t\t\t\t1. Store Data in array \n\t\t\t\t\t2. Show data of the array \n\t\t\t\t\t3. Binary Search the array \n\t\t\t\t\t4. Linear Search the array : ";

}
int main() {
    int choice;
    start:
    menu();
    std::cin >> choice;
    switch (choice) { //Choice menu for the user
            case 1:
                store_data();
                std::cout << "\nDo you want to go back ? 0 or 1 : "; std::cin >> choice;//Getting user choice if to continue
                if (choice == 1)//Going back to start if user agrees
                    goto start;
                else
                {
                    delete[] arr;//Deleting dynamically allocated array

                    return 0;
                }
            case 2:
                show_data();
                std::cout << "\nDo you want to go back ? 0 or 1 : "; std::cin >> choice;//Getting user choice if to continue
                if (choice == 1)//Going back to start if user agrees
                    goto start;
                else
                {
                    delete[] arr;//Deleting dynamically allocated array
                    return 0;
                 
                }            
            case 3:
                binary_search();
                std::cout << "\nDo you want to go back ? 0 or 1 : "; std::cin >> choice;//Getting user choice if to continue
                if (choice == 1)//Going back to start if user agrees
                    goto start;
                else
                {
                    delete[] arr;//Deleting dynamically allocated array
                    return 0;
                }
            case 4:
                linear_search();
                std::cout << "\nDo you want to go back ? 0 or 1 : "; std::cin >> choice; //Getting user choice if to continue
                if (choice == 1)//Going back to start if user agrees
                    goto start;
                else
                {
                    delete[] arr;//Deleting dynamically allocated array
                    return 0;
                }
    }






}