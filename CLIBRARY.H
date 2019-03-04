#ifndef _CLIBRARY_H
#define _CLIBRARY_H

#include"book.h"
#include"member.h"
#include"welscr.h"
#include"admscr.h"
#include"abkscr.h"
#include"dbkscr.h"
#include"lbkscr.h"
#include"amemscr.h"
#include"dmemscr.h"
#include"lmemscr.h"
#include"memscr.h"
#include"brwbkscr.h"
#include"rbkscr.h"
#include"vbkscr.h"
#include"scrdef.h"

#define MAX_MEMBERS 100
#define MAX_BOOKS 100

class cLibrary
{
	private:
	//Members
	member m1[MAX_MEMBERS];
	int no_of_members;
	//Books
	book b1[MAX_BOOKS];
	int no_of_books;

	//Welcome & Login Screens
	wel_screen welscr;

	//Admin: Add Book, List Book, Add Member, List Member Screens
	adm_screen admscr;
	addbkscreen addbkscr;
	listbkscreen listbkscr;
	addmemscreen addmemscr;
	lmemscreen listmemscr;

	//Member: Borrow Book, Return Book, View Book Screens
	mem_screen memscr;
	brwbkscreen brwbkscr;
	rbkscreen rbkscr;
	vbkscreen vbkscr;

	public:
	cLibrary();
	void run();
	member* getmember(const char*);
	void addbook();
	void listofbooks();
	void listofmembers();
	void addmember();
	void borrowbook(int);
	void load();
	void save();

};// end cLibrary

#endif