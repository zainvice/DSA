#include <iostream>
#include <fstream>
#include <ctime>
#include <random>
#include <string>
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

int main(){
    ofstream fout;
    ifstream infile;
    string array[100];
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
        
    }

    fout.close();*/
    infile.open("input.txt");
    int size=1;
    if(infile.is_open()){
       while(!infile.eof()){
            getline (infile, line);
            array[loop]=line;
            cout<<array[loop]<<"\n";
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
    int i=0;
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