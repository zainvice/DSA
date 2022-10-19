//Linear Structures

#include <iostream>
#include <sorting.h>
//#include <chrono>
//using namespace std::chrono;
/*class Sorting{
public:
void bubble_sort(int a[], int size){
   // auto start = high_resolution_clock::now();
   for (int step = 0; step < size; step++)
   {
    
    for (int i = 0; i < size-step; i++)
    {
        if(a[i]>a[i+1]){
           int temp= a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
          //  std::swap(a[i],a[i+1]);
        }
        
    } 
   
    }
   
     //auto stop = high_resolution_clock::now();
    //auto duration = duration_cast<microseconds>(stop - start);
    for (int i = 0; i < size; i++)
    {
       std::cout<<" "<<a[i]<<" ";
        
    }
     //std::cout<<" \n Time Taken: "<<duration.count();
}

void selection_sort(int a[], int size){
    for (int i = 0; i < size; i++)
    {
        int firstindex= i;
        for (int j = i+1; j < size; j++)
        {
            if(a[j]<a[firstindex])
                firstindex=j;
        }
        std::swap(a[firstindex], a[i]);
    }
    for (int i = 0; i < size; i++)
    {
       std::cout<<" "<<a[i];
    }
    
    
}
};*/
int main(){
        //Sorting sort;
        int array[10];
        for (int i = 0; i < 10; i++)
        {
            if(i<5)
            array[i]=53+i;
            else if(i>5)
            array[i]=i-3;
        }
        std::cout<<"Before Sorting: ";
        for (int i = 0; i < 10; i++)
        {
           std::cout<<" "<<array[i];
        }
        
        std::cout<<"\nAfter Selection Sorting: ";
        
        selection_sort(array, 10);
}