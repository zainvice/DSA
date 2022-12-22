#include <iostream>
#include <chrono>//Using to calculate time 
using namespace std::chrono;
int main(){
    const int size=1000;//Constant size used for Array throughout
    int arr[size]; //Declaring array
    int var=0;  //Declaring a variable to reverse fill the array
    for(int i=1000; i>0; i--){ //Loop for reverse filling the array
        
        arr[var]=i;

        var++;
    }
    std::cout<<"Your Array values right now: \n"; //Displaying Array Values beforing apply insertion sort
    for(int i=0; i<size; i++){ //Loop for displaying values
        std::cout<<i+1<<". Value: "<<arr[i]<<" \n";  
       
    }
    //Insertion Sort

    auto start = high_resolution_clock::now();
    for (int i = 1; i < size; i++) {//Loop for itrating through the array to sort
        int key = arr[i]; //key=9 i=2 10//Assigning i value to a key value for comapring 
        int j = i - 1;  //j=1 //Declaring j value 1 less than i

        while (key < arr[j] && j >= 0) { //Using AND logic to run while loop for sorting array
             arr[j + 1] = arr[j]; // Swapping the values

             --j; //Decrementing j value
      
            }

        arr[j + 1] = key; //Assiging a value to key value for comparing
    }
    auto stop = high_resolution_clock::now();//Stopping time clock
    auto duration = duration_cast<microseconds>(stop - start);//Calulating time in microseconds
  
    std::cout<<"\nAfter Sorting \n";
    for (int i = 0; i < size; i++)//Loop for Displaying the array after sorting
    {
        std::cout<<i+1<<". Value: "<<arr[i]<<" \n";
     
    }
    std::cout<<" \n Time Taken: "<<duration.count()<<" microseconds";//Displaying time taken by the sort
    
}