#include <iostream>
#include <fstream>
#include <ctime>
#include <random>
#include <string>
#include <locale>         
using namespace std;
string random_string( size_t length )
{
    static const string alphabet = "abcdefghijklmnopqrstuvwxyz" ;
    static default_random_engine rng( time(nullptr) ) ;
    static uniform_int_distribution<size_t> distribution( 0, alphabet.size() - 1 ) ;

    string str ;
    while( str.size() < length ) str += alphabet[ distribution(rng) ] ;
    return str ;
}
bool isalpha(std::string alpha){
    std::locale loc;
    for (string::iterator it=alpha.begin(); it!=alpha.end(); ++it)
    {
         if (std::isalpha(*it, loc))
                 return true;
         else
                 return false;
     }


};
bool islower(std::string alpha){



};

int main(){
    ofstream fout;
    ifstream infile;
    string array[1000];
    string line;
    int loop=0;
    int num=122;
    char convert;
    //RANDOM WORDS GENERATOR
    fout.open("input.txt");
      for( std::size_t i = 4 ; i < 90 ; i++ ) {
        loop=5;
         fout << random_string(loop) << '\n' ;
        
      }
    fout.close();
    loop=0;
    /*fout.open("output.csv");
    for(int i=0; i<26; i++){
        convert= char(num);
        fout<<convert<<"\t "<<convert<<endl;
        num--;
        
    }*/

    fout.close();
    infile.open("output.txt");
    int size=1;
    if(infile.is_open()){
       while(!infile.eof()){
           
            getline (infile, line);
            if(isalpha(line)){   
                array[loop]=line;
                cout<<array[loop]<<"\n";}
            else{

            }
            loop++;
            size++;
        }
       

    }
    else cout<<"Unexpected Error occured when opening file!";
    for (int i = 0; i < size; i++)//Nested for-loop to step into the array
             {
                int firstindex= i;  //Storing minimum of the array
              for (int j = i+1; j < size-1; j++)
              {
                  if(array[j]<array[firstindex])
                    firstindex=j;//Changing minimum depending on logic
              }
                            string temp= array[i];//Swapping greater with less
                             array[i]=array[firstindex];//An less with greater
                             array[firstindex]=temp;//Swapping Max and Min
                             
            }
   
     /*for (int i = 0; i < size; i++)
    {
       if(islower(array[i])||isupper(array[i]));
    }*/
    cout<<"\nAfter correction: \n";
    for (int i = 0; i < size; i++)
    {
       cout<<array[i]<<"\n";
    }
    fout.open("output_fixed.txt");
    for(int i=0; i<size; i++){
        fout<<array[i]<<endl;
    }
    fout.close();
    
    cout<<"Output done";
    cin>>num;
    infile.close();
    remove("output_fixed.txt");
}