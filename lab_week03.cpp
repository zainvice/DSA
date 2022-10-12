#include<iostream>

using namespace std;
int binary_search(int a[], int size, int value){
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
    int array[7];
    int num=3;
    for (int i = 0; i < 7; i++)
    {
        array[i]=num;
        num+=9;
    }
    for (int i = 0; i < 7; i++)
    {
       cout<<array[i]<<" ";
    }
    cout<<"\n Enter a number to search ";
    cin>>num;
    num=binary_search(array, 7, num);
    cout<<"Your number is at index "<<num;

}