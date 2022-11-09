#include <iostream>
const int size=10;
int* arr= new int [size];
void resizing_array(int size){
    int* arra= new int[size];
    for (int i = 0; i < size; i++)
    {
        arra[i]=arr[i];
    }
    arr=arra;
    delete[] arra;
    
}
int binary_search(int arr[], int size, int value){
    int first=0;
    int last=size-1;
    int middle;
    int position=1;
    bool found=false;
    while(first<=last&&!found){
        middle=first+last/2;
        if(arr[middle]==value){
            position=middle;
            found=true;
        }
        else if(arr[middle] > value){
            last=middle-1;
        }
        else{
            first=middle+1;
        }
    }
    return position;
}
void selection_sort(){
    for(int i=0; i<size; i++){
        int firstindex=arr[i];
        for (int j = 0; j < size-1; j++)
        {
            if(arr[j]<arr[firstindex]){
                firstindex=j;
            }

        }
        int temp=arr[i];
        arr[i]=arr[firstindex];
        arr[firstindex]=temp;

        
    }
}
void bubble_sort(){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; i < size-i; j++)
        {
           if(arr[i]>arr[i+1]){
            //swap
           }
        }
        
    }
    
}
void insertion_sort(){

}
