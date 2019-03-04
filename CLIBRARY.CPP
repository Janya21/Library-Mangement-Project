#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
#include<string.h>
#include"clibrary.h"

cLibrary :: cLibrary()
{
	no_of_books=0;
	no_of_members=0;

	//Welcome & Login Screens
	welscr.setlibrary(this);

	//Admin: Add Book, List Book, Add Member, List Member Screens
	admscr.setlibrary(this);
	addbkscr.setlibrary(this);
	listbkscr.setlibrary(this);
	addmemscr.setlibrary(this);
	listmemscr.setlibrary(this);

	//Member: Borrow Book, Return Book, View Book Screens
	memscr.setlibrary(this);
	brwbkscr.setlibrary(this);
	rbkscr.setlibrary(this);
	vbkscr.setlibrary(this);
}	//end constructor

void cLibrary:: run()
{
	while(1)
	{
		//Welcome & Login Screens
		welscr.display();

		//Admin: Add Book, List Book, Add Member, List Member Screens
		admscr.display();
		addbkscr.display();
		listbkscr.display();
		addmemscr.display();
		listmemscr.display();

		//Member: Borrow Book, Return Book, View Book Screens
		memscr.display();
		brwbkscr.display();
		rbkscr.display();
		vbkscr.display();
	};
}	//end run

void cLibrary::listofmembers()
{
	cout <<"List of Members: " << endl;
	cout << "Name" << "\tUser Name" << "\tAddress" << "\t\tBooks Borrowed" << endl;

	for(int i = 0; i < no_of_members; i++)
	{
		m1[i].display_details();
	}
} // end listofmembers

void cLibrary::listofbooks()
{
	cout <<"List of Books: " << endl;
	cout <<"S no." << "\tName" << "\t\tAuthor" << "\t\tPublisher" << "\t\tStatus" << endl;

	for(int i=0; i<no_of_books; i++)
	{
			b1[i].display_details();
	}
	
} // end listofbooks

void cLibrary::addbook()
{
	cout << "Adding New Book to the Library... " << endl;
	b1[no_of_books].newbook();
	cout << "Successfully Added Book!" << endl;
	no_of_books++;
} //end addbook

void cLibrary::addmember()
{
	m1[no_of_members].newmember();
	no_of_members++;
} //end addmember

void cLibrary::borrowbook(int bkno)
{
	for(int i= 0; i < no_of_books; i++)
	{
		if (b1[i].bookno == bkno)
		{
			int r = b1[i].borrow_book();
			if (r == 1)
			{
				currentmember->borrow_book(&b1[i]);
			}
		}
	}
}	//end borrowbook

member* cLibrary::getmember(const char* strUserName)
{
	for (int i = 0; i < MAX_MEMBERS; i++)
	{
		int r = strcmp(m1[i].username, strUserName);
		if (r == 0)	return &m1[i];
	}

	return NULL;
}	//end getmember

void cLibrary :: load()
{
	fstream f1("Books.txt" , ios::in|ios::binary);

	//read into temp library
	cLibrary tempLibrary;
	f1.read((char*)&tempLibrary, sizeof(cLibrary));
	//take in only those needed contents
	no_of_books = tempLibrary.no_of_books;

	for(int i=0; i<no_of_books; i++)
	{
		b1[i].load(&f1);
	}
}

void cLibrary :: save()
{
	fstream f1("Books.txt" , ios::out|ios::binary);
	f1.write((char*)this, sizeof(cLibrary));

	for(int i=0; i<no_of_books; i++)
	{
		b1[i].save(&f1);
	}
}