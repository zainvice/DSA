#include <iostream>
void bubble_sort(int a[], int s){
   for (int step = 0; step < s; step++)
   {
    for (int i = 0; i < s; i++)
    {
        if(a[i]>a[i+1]){
           int temp= a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
          //  std::swap(a[i],a[i+1]);
        }
        
    } 
    }
   
    
    for (int i = 0; i < s; i++)
    {
       std::cout<<" "<<a[i]<<" ";
        
    }
    
}
void selection_sort(int a[], int size){
    for (int i = 0; i < size-1; i++)
    {
        int firstindex= i;
        for (int j = 0; j < size-i; j++)
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