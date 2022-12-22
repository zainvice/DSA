#include <iostream>
void bubble_sort(int a[], int s){
   for (int step = 0; step < s; step++)
   {
    for (int i = 0; i < s-1; i++)
    {
        if(a[i]>a[i+1]){
           int temp= a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
          //  std::swap(a[i],a[i+1]);
        }
        
    } 
    }
}
int main(){
    int array[10]={8,6,10,13,4,5,3,2,4,9};
    int s=1;
    int v=9;
    for(int i=0; i<18; i++){
        for(int j=0; j<v; j++){
            std::cout<<" ";
            v--;
            
        }
        for(int k=0; k<s; k++){
            std::cout<<"*";
        }
        std::cout<<"\n";
        s=s+2;
        
    }
}