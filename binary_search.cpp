#include <iostream>
using namespace std;

int dynamic_search(int a[], int size, int value){
    int first=0;
    int last=size-1;
    bool found=false;
    int middle;
    int position=-1;
    while( first<=last && !found){
        middle=(first+last)/2;
        if(a[middle]==value)
        {
            found=true;
            position=middle;
        }
        else if(a[middle]>value){
            last=middle-1;
        }
        else
            first=middle+1;

    }
    return position;
}
int main(){
    int numbers[20]={01,02,25,35,36,37,44,52,53,65,65,66,67,70,71,73,82,85,98};
    int result=dynamic_search(numbers, 20, 85);
    if(result==-1)
        cout<<"Nothing";
    else
        cout<<"Found number at index: "<<result;
}