#ifndef _BOOK_H
#define _BOOK_H
#include<fstream.h>

 enum bookstatus {AVAILABLE = 0, HIRED = 1};

class book
{
	public:
	int bookno, qty;
	char bookname[20], author[20], publisher[10], dateborrowed[10];
	bookstatus status;

	void display_details(); // to see the details of a book
	void return_book();
	int borrow_book();
	void newbook(); // to enter details of a new book
	void load(fstream *ptr);
	void save(fstream *ptr);
}; // end book

#endif