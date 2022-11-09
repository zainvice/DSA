//LAB 04 //SELECTION SEARCH
#include <iostream>
#include <chrono>
using namespace std::chrono;//Using to calculate time 

int main(){
    //Sorting sort;
    int choice;
    const int size = 10;//Defining constant size
    int* arr = new int [size];//Dynamically allocating array
    start:
     //Main Menu for the user
    std::cout << "\n\n\n\n\t\t\t\t\t   Choose any option! \n\t\t\t\t\t1. Show Data of the array \n\t\t\t\t\t2. Store data in the array \n\t\t\t\t\t3. Bubble sort the array \n\t\t\t\t\t4. Selection sort the array : ";
    std::cin >> choice;
   
    switch (choice) { //Choice menu for the user
            case 1:
                { //Show data function for the array
                std::cout << "\nArray Content: ";
                for (int i = 0; i < size; i++) //Loop for showing values to the user
                     {
                        std::cout << arr[i] << " ";
                     }
                std::cout << "\nDo you want to go back ? 0 or 1 : "; 
                std::cin >> choice;//Getting user choice if to continue
                if (choice == 1)//Going back to start if user agrees
                    goto start;
                else
                {
                    delete[] arr;//Deleting dynamically allocated array

                    return 0;
                }
                }
            case 2:
                { //Store data function for the array
                char c_choice; //Giving user to choose to enter number manually or automatically
                 std::cout << "\nDo you want to enter array manually or automatically remember array size is " << size << " Yes for automatically Y/N? :"; std::cin >> c_choice;
                 if (c_choice == 'Y'||c_choice == 'y') {
                        for(int i=0; i<size; i++)//Loop Adding 2000 values in random order
                        {
                            if(i<100)
                                arr[i]=100+i;
                            else if(i>=100&&i<500)
                                arr[i]=i-100;
                            else if(i>=500&&i<=1000)
                                arr[i]=600+i;
                            else if(i>1000&&i<=size)
                                arr[i]=i-800;
                        }
                     
                     std::cout << "Data succesfully Added ";
                     std::cout << "\nDo you want to go back ? 0 or 1 : "; 
                     std::cin >> choice;//Getting user choice if to continue
                     if (choice == 1)//Going back to start if user agrees
                        goto start;
                     else
                       {
                            delete[] arr;//Deleting dynamically allocated array
                              return 0;
                 
                        }
                   }
                 else {
                    for (int i = 0; i < size; i++) //Loop for storing value from the user
                     {
                        std::cout << "Enter value " << i + 1 << " of array : "; std::cin >> arr[i];

                    }
                     std::cout << "\nDo you want to go back ? 0 or 1 : "; std::cin >> choice;//Getting user choice if to continue
                    if (choice == 1)//Going back to start if user agrees
                           goto start;
                    else
                     {
                    delete[] arr;//Deleting dynamically allocated array
                    return 0;
                 
                     }
                  }
               
                }            
            case 3: //Bubble Sort
             {
                auto start = high_resolution_clock::now();//Calculating time starting clock
                 for (int step = 0; step < size; step++)//Loop to step into the array
                  {
    
                        for (int i = 0; i < size-step; i++)//Loop to compare value
                           {
                             if(arr[i]>arr[i+1]){//logic to compare two value greater or less
                             int temp= arr[i];//Swapping greater with less
                             arr[i]=arr[i+1];//And less with greater
                             arr[i+1]=temp;
                    
                            }
        
                  } 
    
                 }
   
              auto stop = high_resolution_clock::now();//Stopping time clock
              auto duration = duration_cast<microseconds>(stop - start);//Calulating time in microseconds
                std::cout << "Your array have been sorted. \nCheck show data.\n1 to go back!";
                std::cout<<" \n Time Taken: "<<duration.count()<<" microseconds";
                std::cout << "\nDo you want to go back ? 0 or 1 : "; std::cin >> choice;//Getting user choice if to continue
                if (choice == 1)//Going back to start if user agrees
                    goto start;
                else
                {
                    delete[] arr;//Deleting dynamically allocated array
                    return 0;
                }
        }
    case 4: //Selection Sort
        {
        auto start = high_resolution_clock::now();//Starting clock
        for (int i = 0; i < size; i++)//Nested for-loop to step into the array
             {
                int firstindex= i;  //Storing minimum of the array
              for (int j = i+1; j < size-1; j++)
              {
                  if(arr[j]<arr[firstindex])
                    firstindex=j;//Changing minimum depending on logic
              }
                            int temp= arr[i];//Swapping greater with less
                             arr[i]=arr[firstindex];//An less with greater
                             arr[firstindex]=temp;//Swapping Max and Min
            }
           
                 auto stop = high_resolution_clock::now();//Stopping clock
                 auto duration = duration_cast<microseconds>(stop - start);//Calulating time in microseconds
                std::cout << "Your array have been sorted. \nCheck show data.\n1 to go back!";
                std::cout<<" \n Time Taken: "<<duration.count()<<" microseconds";
    
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

    
        
}