#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include"book.h"

void book::newbook()
{
	cout << "Please Enter the book number  ";
	cin >> bookno;
	cout <<"Please Enter book name  ";
	gets(bookname);
	cout << "Please Enter the name of the author ";
	gets(author);
	cout << "Please Enter the publisher of the book ";
	gets(publisher);
	status = AVAILABLE;
}

void book::display_details()
{
	 cout << bookno << "\t" << bookname <<"\t\t" << author <<"\t  " << publisher << "\t\t";
	 if (status == AVAILABLE)
		cout << "AVAILABLE";
	 else
		cout << "HIRED";
	 cout << endl;
}

void book:: return_book()
{
	status = AVAILABLE;
}

int book::borrow_book()
{
	if (status == HIRED)	return 0;
	status = HIRED;
	return 1;
}


void book::load(fstream *ptr)
{
	//read into temproary book
	book tempbook;
	ptr->read((char*)&tempbook, sizeof(book));
	//take only those contents that are needed
	bookno = tempbook.bookno;
	strcpy(bookname, tempbook.bookname);
	strcpy(author, tempbook.author);
	strcpy(publisher, tempbook.publisher);
	status = tempbook.status;
}

void book::save(fstream *ptr)
{
	ptr->write((char*)this, sizeof(book));
}