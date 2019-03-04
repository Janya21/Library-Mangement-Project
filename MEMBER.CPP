#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include"member.h"

member* currentmember = NULL;

member::member()
{
	bksborrowed = 0;
}

void member ::books_borrowed()
{
	cout << " Details of the books borrowed: " << endl;
	cout <<"S no." << "\tName" << "\t\tAuthor" << "\t\tPublisher" << "\t\tStatus" << endl;

	for(int i = 0; i < bksborrowed; i++)
	{
		mybooks[i]->display_details();
	}
	cout << endl;
}

void member :: newmember()
{
	clrscr();
	 cout << "\t \t \t *********** WELCOME ***********" << endl <<endl <<endl;
	 cout << " \n\n\t\tFill in the form below to join the Library !!!! "<< endl << endl;
	 cout << " \n\t\t\tEnter Your Name: ";
	 gets(membername);
	 cout << "\n\t\t\tEnter Date of Birth as [dd\mm\yy]: ";
	 gets(doj);
	 cout << "\n\t\t\tEnter Your Residential Address: ";
	 gets(address);
	 cout << "\n\t\t\tType in your Username: ";
	 cin >> username;
}

void member :: display_details()
{
	cout << membername << "\t" << username << "\t" << address << "\t\t" << bksborrowed << endl;
}

void member ::return_book(int bkno)
{
	for(int i=0; i < bksborrowed; i++)
	{
		if (mybooks[i]->bookno == bkno)
		{
			mybooks[i]->return_book();
			mybooks[bksborrowed-1] = NULL;
			for (int j = i; j < bksborrowed; j++)
			{
				mybooks[j] = mybooks[j+1];
			}
			bksborrowed--;
		}
	}
}

void member ::borrow_book(book* ptr)
{
	mybooks[bksborrowed] = ptr;
	bksborrowed++;
}
