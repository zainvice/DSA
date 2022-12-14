#ifndef GLOBAL_GUARD
#define GLOBAL_GUARD 1

#ifndef _GLIBCXX_IOSTREAM 
#include<iostream>
using namespace std;
#endif

#ifndef _WINDOWS_ 
#include<windows.h>//i.e. provides helper funcs for constructing 'gotoxy' func
#endif

#ifndef _INC_CONIO
#include<conio.h>//i.e. provides 'kbhit' func
#endif

#ifndef _GLIBCXX_IOMANIP
#include<iomanip>//i.e. provides 'setprecision' func
#endif

#if !STRING_GUARD

#endif

namespace Global{
	typedef unsigned char uchar;
	typedef unsigned long long uint64;
	
	void Gotoxy(short x,short y){//Note: x->coloumn & y->row, i.e. gotoxy(col,row)
		COORD var;
		var.X=x; var.Y=y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),var);
		//i.e. provides specific modes of graphical representation for console
	}
	
	void Cursor_Pointer(short x,short y){
		for (uchar i=0;!kbhit();++i){
			if (i==1)
				cout<<"<";
			else if(i==2)
				cout<<"^";
			else if (i==3)
				cout<<">";
			else
				cout<<"v";
			Gotoxy(x,y);
			Sleep(100);
			Gotoxy(x,y);
			if (i==4)
				i=0;
		}
		cout<<"\b  ";
	}
	
	void Display_Boxes(uchar total_boxes,uchar x,uchar y,uchar length,uchar width=3,char character='?'){
		for (uchar j,k,z=0,i=0;i<total_boxes;++i){//i.e. z->skips 2 lines after 1 box
			for (j=1;j<=width;++j){
				Gotoxy(x,y+z);
				for (k=1;k<=length;++k){
					if (j==1||j==width||k==1||k==length)
						cout<<character;
					else
						cout<<" ";
				}
				cout<<"\n";
				++y;
			}
			++z;
		}
	}
	
	inline void Print_Multiple_Args(){}//i.e. base case condition func
	
	template<typename T,typename... Types>
	void Print_Multiple_Args(const T& Arg1,const Types&... Args){//Note: Parameter-Pack (...)-> takes multiple args
		cout<<Arg1;
		Print_Multiple_Args(Args...);
		/*Note: Func will recursively call variadic template based func until it recieves 
				    zero args & then, it calls base func (using overloading concept) */
	}
	
	template<typename D,class L1,class L2,typename T,typename... Types>
	void Validate_Input(D& Dest,const L1& Lower_Limit,const L2& Upper_Limit,const T& Arg1,const Types&... Arg2){//Note: Dest should only be any integer type
		while(true){
			Print_Multiple_Args(Arg1,Arg2...);//i.e. displays complete string
			cin>>Dest;
			if(Dest>=Lower_Limit&&Dest<=Upper_Limit)
				break;
			cout<<"\a";//i.e. system sound
			cin.clear();
			fflush(stdin);
			//Note: Here, we have to use both cin.clear() & fflush(stdin) to clear buffer
		}
	}
	
	
}

#endif
