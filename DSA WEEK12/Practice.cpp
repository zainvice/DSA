#include <iostream>
using namespace std;
class Solution{
    public:
    bool isString(string s){
        //{} [] ()
        for(int i=0; i<s.length(); i++){
            if(s[i]=='('&&s[i+1]==')'||s[i]=='{'&&s[i+1]=='}'||s[i]=='['&&s[i+1]==']')
            {
                return true;
            }
            else if(s[i]=='('&&s[i+1]=='{'&&s[i+2]=='}'&&s[i+3]==')'||s[i]=='{'&&s[i+1]=='('&&s[i+2]==')'&&s[i+3]=='}'||s[i]=='['&&s[i+1]=='('&&s[i+2]==')'&&s[i+3]==']'||s[i]=='['&&s[i+1]=='{'&&s[i+2]=='}'&&s[i+3]==']')
            {
                return true;
            }
            else
                return false;
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
    else 
        cout<<"Invalid";
    cout<<"\nGo back!"; cin>>s;
    if(s=="y")
       goto start;
    else return 0;

}