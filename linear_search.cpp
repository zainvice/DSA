#include <iostream>
using namespace std;

int linear_search(int a[], int size, int value){
    int s=0;
    int position=-1;
    bool found=false;
    while( s<size && !found){
        if(a[s]==value)
        {
            found=true;
            position=s;
        }
        s++;
    }
    return position;
}
int main(){

    int numbers[20]={01,50,02,73,82,65,52,66,45,85,65,25,35,35,35,98,52,66,44,85};
    int result=linear_search(numbers, 20, 44);
  
    if(result==-1)
        cout<<"Number wasnt found";
    else
        cout<<"Number was found at "<<result+1<<" position";



}