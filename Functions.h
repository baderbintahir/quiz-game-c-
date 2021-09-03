#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;

/****************************
	Functions Prototypes
*****************************/
void Mainmenu(void);
void Keypress(void);
void lodingbar(void);
void Name(void);
void Fixedshow(void);
void Welcome(void);
void Result(void);
void Playagain(void);
int highscore(void);
void Options(void);
void Backmenu(void);

/************************************
		Main Menue Function
************************************/
void Mainmenu(void)
{
	char ary[50]="THE QUIZ GAME";
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\n\t\t\t\t   ";
	for(int i=0;i<20 ;i++)
	{
		cout<<"*";
		Sleep(60);
	}
	cout<<"\n\t\t\t\t       ";
	for(int i=0;i<13;i++)
	{
		cout<<ary[i];
		Sleep(120);
	}
	cout<<"\n\t\t\t\t   ";
		for(int i=0;i<20 ;i++)
	{
		cout<<"*";
		Sleep(60);
	}
}

/************************************
		Keypress Function
************************************/
void Keypress(void)
{
	char ary[50]="Press Any Key To Continue ";
	cout<<"\n\n\t\t\t\t ";
	for(int i=0;i<27;i++)
	{
		cout<<ary[i];
		Sleep(50);
	}
	cout<<" ";
	_getch();
}

/****************************************
	Function Defination Loding Bar
****************************************/
void lodingbar(void)
{
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t  Loading Questions Please Wait:\n";
	cout<<"\t\t\t\t\t";
	for(int i=0;i<=33;i++)
	{
		cout<<">";
		Sleep(200);
	}
	cout<<"\n\n";
}

/************************************
		Entering Name Function
************************************/
void Name(void)
{
	char ary[50]="Enter Your Full Name : ";
	for(int i=0;i<23 ;i++)
	{
		cout<<ary[i];
		Sleep(50);
	}
}

/************************************
	   Fixed Text Show Function
************************************/
void Fixedshow(void)
{
	char ary[50]="THE QUIZ GAME";
	cout<<"\n\t\t\t\t\t    ";
	for(int i=0;i<20 ;i++)
	{
		cout<<"*";
	}
	cout<<"\n\t\t\t\t\t\t";
	for(int i=0;i<13;i++)
	{
		cout<<ary[i];
	}
	cout<<"\n\t\t\t\t\t    ";
	for(int i=0;i<20 ;i++)
	{
		cout<<"*";
	}
	cout<<"\n";
	for(int i=0;i<120;i++)
	{
		cout<<"=";
	}
}

/************************************
	Displaying Results Function
************************************/
void Result(void)
{
	char ary[50]="Your Score Is = ";
	for(int i=0;i<16 ;i++)
	{
		cout<<ary[i];
		Sleep(120);
	}
}

/************************************
	    Playagain Function
************************************/
void Playagain(void)
{
	char ary1[50]="\t\t\tPress 1 To Play Again:";
	char ary2[50]="\n\t\t\t\t\tPress 2 To Exit Game: ";
	for(int i=0;i<30;i++)
	{
		cout<<ary1[i];
		Sleep(30);
	}
	for(int i=0;i<28;i++)
	{
		cout<<ary2[i];
		Sleep(30);
	}
}

/************************************
	    Check High Score Function
************************************/
int highscore(void)
{
		int a=0;
		ifstream filescore("Scores.txt");
		for (int i=0;i<sizeof filescore;i++)
		{
			int con;
			filescore>>con;
			if(con>a)
			a=con;
		}
		return a;
}

/************************************
	Display Options Function
************************************/
void Options(void)
{
	char ary1[50]="\n\t\t\t\tPress 1 To Start The Game:";
	char ary2[50]="Press 2 To Check Score List:";
	char ary3[50]="Press 3 To Exit Game:  ";
	for(int i=0;i<36 ;i++)
	{
		cout<<ary1[i];
		Sleep(30);
	}
	cout<<"\n\t\t\t\t";
	for(int i=0;i<28 ;i++)
	{
		cout<<ary2[i];
		Sleep(30);
	}
	cout<<"\n\t\t\t\t";
	for(int i=0;i<21 ;i++)
	{
		cout<<ary3[i];
		Sleep(30);
	}	
	cout<<"  ";
}

/************************************
	Keypresss to back menu Function
************************************/
void Backmenu(void)
{
	char ary[50]="Press Any Key To Back to Menu :";
	cout<<"\n\n\t\t\t\t ";
	for(int i=0;i<31;i++)
	{
		cout<<ary[i];
		Sleep(60);
	}
	cout<<" ";
	_getch();
}
