#include"brwbkscr.h"
#include<iostream.h>
#include<conio.h>
#include"clibrary.h"

void brwbkscreen :: display()
{
	if(currentscreen!=brwbk_scr)
	{
		return;
	}
	display_screen();
	process_choice();
} // end display

void brwbkscreen :: display_screen()
{
	clrscr();
	cout << " What book do you want to borrow today?" << endl;
	lib->listofbooks();
} // end display_screen

void brwbkscreen :: process_choice()
{
	cout << " Type the number of the book you want to borrow "<< endl;
	int bkno;
	cin >> bkno;
	cout <<"Please wait . " ;
	cout << " searching for availability !!!!";
	lib->borrowbook(bkno);
	currentscreen=mem_scr;
}	//end process_choice