#include <iostream>
using namespace std;
class Solution{
    public:
    bool isString(string s){
        if(1<=s.length()||s.length()<=104)
          {
            for(int i=0; i<s.length(); i++){
                if(s[i]=='('||s[i+1]=='{'||s[i+2]=='['){

                }
                else if(s[i]=='{'||s[i+1]=='('||s[i+2]=='['){
                    
                }
                else if(s[i]=='['||s[i+1]=='{'||s[i+2]=='('){

                }
                else if(s[i]=='{'||s[i+1]=='('||s[i+2]=='['){
                    
                }
                else if(s[i]=='['||s[i+1]=='{'||s[i+2]=='('){

                }
                else if(s[i]=='{'||s[i+1]=='('||s[i+2]=='['){
                    
                }
             }
          }
    }
};
int main(){
    Solution so;
    string s;
    start:
    cout<<"Enter string? "; cin>>s;
    if(so.isString(s)){
        cout<<"Valid";
    }
    else //{[]}
        cout<<"Invalid";
    cout<<"\nGo back!"; cin>>s;
    if(s=="y")
       goto start;
    else return 0;

}