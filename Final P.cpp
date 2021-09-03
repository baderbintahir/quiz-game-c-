#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
#include"Functions.h"
using namespace std;

void Reader(ifstream &file_Q,ifstream &file_Op,ifstream &file_A,int random);          

int count=0;                 
int main(void)
{
	string name="0";
	int choice=0;
	system("color f0");
	Mainmenu();
	Keypress();
	system("CLS");
	Fixedshow();
	Sleep(1000);
	cout<<"\n\n\t\t";
	Name();
	getline(cin,name);
	system("CLS");
	again: Fixedshow();
	cout<<"\n\n\t\t\t\tWelcome Dear "<<name;
	cout<<"\n\n";
	Sleep(400);
	back1: Options();
	cin>>choice;
	if(choice>3||choice<1)
	{
		Sleep(100);
		system("CLS");
		system("color fc");
		cout<<"\a";
		Fixedshow();
		cout<<"\n\n\t\t\t\t\tInvalid Entry:";
		Sleep(500);
		Backmenu();
		Sleep(300);
		system("CLS");
		system("color f0");
		Fixedshow();
		cout<<"\n";
		goto back1;
	}
	if(choice==3)
	{
		Sleep(200);
		return 0;
	}
	if(choice==2)
	{
		system("CLS");
		Fixedshow();
		back2: cout<<"\n";
		int num=0;
		string list;
		ifstream scorelist("Scorelist.txt");
		if(scorelist.is_open())
		{
			cout<<"\n";
			while(!scorelist.eof())
			{
				cout<<"\t\t\t";
				getline(scorelist,list);
				cout<<list<<endl;
			}
		}
		Sleep(600);
		cout<<"\n\n\t\t\tPress 1 To Back to Menu:";
		cout<<"\n\t\t\tPress 2 To Exit Game: ";
		cin>>num;
		if(num==1||num==2)
		{
			if(num==1)
			{
				system("CLS");
				Sleep(400);
				Fixedshow();
				cout<<"\n";
				goto back1;
			}
			if(num==2)
			{
				Sleep(200);
				return 0;
			}
		}
		else
		{
			Sleep(100);
			system("CLS");
			system("color fc");
			cout<<"\a";
			Fixedshow();
			cout<<"\n\n\t\t\t\t\t   Invalid Entry:";
			Sleep(500);
			Backmenu();
			Sleep(500);
			system("CLS");
			system("color f0");
			Fixedshow();
			goto back2;
		}
	}
	if(choice==1)
	system("CLS");
	lodingbar();
	Sleep(600);
	system("CLS");
	Fixedshow();
	/*************************************
				Question 1
	*************************************/
	int random=0;
	srand(time(0));
	random=rand()%26+1;
	ifstream file_Q1("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Question_files\\Question_file1.txt");
	ifstream file_Op1("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Option_files\\Option_file1.txt");
	ifstream file_A1("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Ans_files\\Ans_file1.txt");
	if (file_Q1.is_open()||file_Op1.is_open()||file_A1.is_open())
	{
		Reader(file_Q1,file_Op1,file_A1,random);
	}
	else
	{
		cout<<"ERROR IN OPENING A FILE";
	}
	
	Sleep(500);
	system("CLS");
	Fixedshow();
	/*************************************
				Question 2
	*************************************/
	random=0;
	srand(time(0));
	random=rand()%29+1;
	ifstream file_Q2("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Question_files\\Question_file2.txt");
	ifstream file_Op2("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Option_files\\Option_file2.txt");
	ifstream file_A2("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Ans_files\\Ans_file2.txt");
	if (file_Q2.is_open()||file_Op2.is_open()||file_A2.is_open())
	{
		Reader(file_Q2,file_Op2,file_A2,random);
	}
	else
	{
		cout<<"\nERROR IN OPENING A FILE";
	}
	
	Sleep(500);
	system("CLS");
	Fixedshow();
	/*************************************
				Question 3
	*************************************/
	random=0;
	srand(time(0));
	random=rand()%29+1;
	ifstream file_Q3("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Question_files\\Question_file3.txt");
	ifstream file_Op3("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Option_files\\Option_file3.txt");
	ifstream file_A3("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Ans_files\\Ans_file3.txt");
	if (file_Q3.is_open()||file_Op3.is_open()||file_A3.is_open())
	{
		Reader(file_Q3,file_Op3,file_A3,random);
	}
	else
	{
		cout<<"\nERROR IN OPENING A FILE";
	}
	
	Sleep(500);
	system("CLS");
	Fixedshow();
	/*************************************
				Question 4
	*************************************/
	random=0;
	srand(time(0));
	random=rand()%20+1;
	ifstream file_Q4("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Question_files\\Question_file4.txt");
	ifstream file_Op4("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Option_files\\Option_file4.txt");
	ifstream file_A4("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Ans_files\\Ans_file4.txt");
	if (file_Q4.is_open()||file_Op4.is_open()||file_A4.is_open())
	{
		Reader(file_Q4,file_Op4,file_A4,random);
	}
	else
	{
		cout<<"\nERROR IN OPENING A FILE";
	}
	
	Sleep(500);
	system("CLS");
	Fixedshow();
	/*************************************
				Question 5
	*************************************/
	random=0;
	srand(time(0));
	random=rand()%27+1;
	ifstream file_Q5("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Question_files\\Question_file5.txt");
	ifstream file_Op5("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Option_files\\Option_file5.txt");
	ifstream file_A5("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Ans_files\\Ans_file3.txt");
	if (file_Q5.is_open()||file_Op5.is_open()||file_A5.is_open())
	{
		Reader(file_Q5,file_Op5,file_A5,random);
	}
	else
	{
		cout<<"\nERROR IN OPENING A FILE";
	}
	
	Sleep(500);
	system("CLS");
	Fixedshow();
	/*************************************
				Question 6
	*************************************/
	random=0;
	srand(time(0));
	random=rand()%27+1;
	ifstream file_Q6("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Question_files\\Question_file6.txt");
	ifstream file_Op6("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Option_files\\Option_file6.txt");
	ifstream file_A6("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Ans_files\\Ans_file6.txt");
	if (file_Q6.is_open()||file_Op6.is_open()||file_A6.is_open())
	{
		Reader(file_Q6,file_Op6,file_A6,random);
	}
	else
	{
		cout<<"\nERROR IN OPENING A FILE";
	}
	
	Sleep(500);
	system("CLS");
	Fixedshow();
	/*************************************
				Question 7
	*************************************/
	random=0;
	srand(time(0));
	random=rand()%16+1;
	ifstream file_Q7("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Question_files\\Question_file7.txt");
	ifstream file_Op7("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Option_files\\Option_file7.txt");
	ifstream file_A7("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Ans_files\\Ans_file7.txt");
	if (file_Q7.is_open()||file_Op7.is_open()||file_A7.is_open())
	{
		Reader(file_Q7,file_Op7,file_A7,random);
	}
	else
	{
		cout<<"\nERROR IN OPENING A FILE";
	}
	
	Sleep(500);
	system("CLS");
	Fixedshow();
	/*************************************
				Question 8
	*************************************/
	random=0;
	srand(time(0));
	random=rand()%29+1;
	ifstream file_Q8("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Question_files\\Question_file8.txt");
	ifstream file_Op8("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Option_files\\Option_file8.txt");
	ifstream file_A8("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Ans_files\\Ans_file8.txt");
	if (file_Q8.is_open()||file_Op8.is_open()||file_A8.is_open())
	{
		Reader(file_Q8,file_Op8,file_A8,random);
	}
	else
	{
		cout<<"\nERROR IN OPENING A FILE";
	}
	
	Sleep(500);
	system("CLS");
	Fixedshow();
	/*************************************
				Question 9
	*************************************/
	random=0;
	srand(time(0));
	random=rand()%27+1;
	ifstream file_Q9("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Question_files\\Question_file9.txt");
	ifstream file_Op9("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Option_files\\Option_file9.txt");
	ifstream file_A9("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Ans_files\\Ans_file9.txt");
	if (file_Q9.is_open()||file_Op9.is_open()||file_A9.is_open())
	{
		Reader(file_Q9,file_Op9,file_A9,random);
	}
	else
	{
		cout<<"\nERROR IN OPENING A FILE";
	}
	
	Sleep(500);
	system("CLS");
	Fixedshow();
	/*************************************
				Question 10
	*************************************/
	random=0;
	srand(time(0));
	random=rand()%23+1;
	ifstream file_Q10("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Question_files\\Question_file10.txt");
	ifstream file_Op10("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Option_files\\Option_file10.txt");
	ifstream file_A10("C:\\Users\\Talha Choudhary\\Desktop\\Talha\\Ans_files\\Ans_file10.txt");
	if (file_Q10.is_open()||file_Op10.is_open()||file_A10.is_open())
	{
		Reader(file_Q10,file_Op10,file_A10,random);
	}
	else
	{
		cout<<"\nERROR IN OPENING A FILE";
	}
	
	Sleep(1000);
	system("CLS");
	/*************************************
			Displaying Result
	*************************************/
	if(count>=highscore())
	{
		system("color 0a");
		cout<<"\n\n\t\t\t\t\t";
		Result();
		cout<<count;
		cout<<"\n\n\n\t\t\t\t\t****************************";
		cout<<"\n\t\t\t\t\t High Score Congratulations:";
		cout<<"\n\t\t\t\t\t****************************";
		Sleep(1000);
		Backmenu();
		system("CLS");
		system("color f0");
		goto back;
	}
	else
	cout<<"\n\n\n\n\t\t\t\t\t    ";
	Result();
	cout<<count;
	back: cout<<"\n\n\t\t";
	choice=0;
	Playagain();
	cin>>choice;
			
	ofstream NameScore_file("Scorelist.txt",ios::app);
	{
		NameScore_file<<name<<"\t\t"<<count<<endl;
	}
	ofstream NameScore_file1("Scores.txt",ios::app);
	{
		NameScore_file1<<count<<endl;
	}
	
	if(choice==1||choice==2)
	{
		if(choice==1)
		{
			Sleep(1000);
			system("CLS");
			goto again;
		}	
		if(choice==2)
		{
			Sleep(500);
			return 0;
		}
	}
	else
	{
		system("CLS");
		system("color fc");
		cout<<"\a";
		Fixedshow();
		cout<<"\n\n\t\t\t\t\tInvalid Entry";
		Sleep(500);
		Backmenu();
		Sleep(500);
		system("CLS");
		system("color f0");
		goto back;	
	} 
	
	_getch();
	return 0;
}

/**********************************************************************
	Function Defination to Display Random Questions and Taking Answer
***********************************************************************/
void Reader(ifstream &file_Q,ifstream &file_Op,ifstream &file_A,int random)
{
	string ary_Q="0", ary_A="0", a="0", b="0", c="0", d="0", e="0",ans="0";
	for(int i=0;i<random;i++)
		{
			getline(file_Q,ary_Q);
			{
				a=ary_Q;
					
				getline(file_Op,ary_Q);
				{
					b=ary_Q;	
				}
				getline(file_Op,ary_Q);
				{
					c=ary_Q;	
				}
				getline(file_Op,ary_Q);
				{
					d=ary_Q;	
				}
				getline(file_Op,ary_Q);
				{
					e=ary_Q;	
				}	
			}
			getline(file_A,ary_A);
			{
				ary_A;
			}	
		}
				
	cout<<"\n\n\t"<<a<<"\n\n\n";	Sleep(500);
	cout<<"\t\t  "<<b<<endl;		Sleep(400);
	cout<<"\n\t\t  "<<c<<endl;		Sleep(400);
	cout<<"\n\t\t  "<<d<<endl;		Sleep(400);
	cout<<"\n\t\t  "<<e<<endl;		Sleep(400);
	cout<<"\n\n\tEnter Your Answer Only In (a,b,c,d) ---> ";
	cin>>ans;
	
	if (ans==ary_A)
	{
		count++;
		system("color f2");
		cout<<"\n\n\t\tRight Answer";
		Keypress();
		system("color f0");
	}
	else
	{
		system("color fc");
		cout<<"\a\n\n\t\tWrong Answer:";
		cout<<"\n\n\t\tThe Write Answer Is = ("<<ary_A<<")";
		Keypress();
		system("color f0");
	}
	file_Q.clear();
	file_A.clear();
	file_Op.clear();	
	file_Q.close();
	file_A.close();
	file_Op.close();
	cout<<"\n";	
}
