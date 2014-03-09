/*
declare array int variable[size]
2d array int variable [row][col]
intialize array
int variable[size][size]
{
row 1 {values}
row 1 {values}
etc..
};
*/
#include <iostream>
#include<stdlib.h>//random srandom (time(NULL)) to declare the random. rand() % # to set a random number between a number
#include<time.h>//time
#include<stdio.h>
#include<iomanip>// spacing setw()
#include <conio.h>//getch()
using namespace std;
int main()
{
	char input;
	int A1[10][10]=
	{
		{1,3,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,0,1},
		{1,0,0,0,0,0,0,1,0,1},
		{1,0,1,1,1,1,0,0,0,1},
		{1,4,1,1,1,1,1,1,1,1}
	};
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{

			if(A1[i][j]==0)
				cout<<(char)178;
			else if(A1[i][j]==1)
				cout<<(char)176;
			else if(A1[i][j]==4)
			{
				cout<<(char)219;
			}else
				cout<<(char)254;
		}
		cout<<endl;
	}
	int k=0;
	int l=1;
	do
	{

		flushall();
		input=getch();
		if(input=='w')
		{
			if(A1[k-1][l]!=1)
			{
				A1[k-1][l]=3;
				A1[k][l]=0;
				k--;
			}
		}
		else if(input=='a')
		{
			if(A1[k][l-1]!=1)
			{
				A1[k][l-1]=3;
				A1[k][l]=0;
				l--;
			}
		}
		else if(input=='s')
		{
			if(A1[k+1][l]!=1)
			{
				A1[k+1][l]=3;
				A1[k][l]=0;
				k++;
			}
		}
		else if(input=='d')
		{
			if(A1[k][l+1]!=1)
			{
				A1[k][l+1]=3;
				A1[k][l]=0;
				l++;
			}
		}

		system("CLS");
		for(int i=0;i<10;i++)
		{
			for(int j=0;j<10;j++)
			{

				if(A1[i][j]==0)
					cout<<(char)178;
				else if(A1[i][j]==1)
					cout<<(char)176;
				else if(A1[i][j]==4)
				{
					cout<<(char)219;
				}else
					cout<<(char)254;
			}
			cout<<endl;
		}
	}while(input!='q'&&A1[9][1]!=3);
	if(A1[9][1]==3)
		cout<<"YOU WIN!\n";
	system("pause");
	return 0;

}
