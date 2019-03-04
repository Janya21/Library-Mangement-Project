#ifndef _MEMBER1_H
#define _MEMBER1_H

#include "book.h"
#define MAX_BOOK_BORROW 2

class member
{
	public:
	char membername[20], memberid[10], doj[10], dateofexpiry[10], address[20];
	char username[10];
	int bksborrowed;
	book* mybooks[MAX_BOOK_BORROW];

	member();
	void books_borrowed(); //to display details of all the books borrowed by this member
	void newmember(); // to enter details for a new member
	void display_details();  // to view the details of a member
	void return_book(int);
	void borrow_book(book*);
}; // end member

extern member* currentmember;

#endif