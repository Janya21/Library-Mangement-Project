#include"rbkscr.h"
#include<iostream.h>
#include<conio.h>
#include"clibrary.h"

void rbkscreen :: display()
{
	if(currentscreen!=returnbk_scr)
	{
		return;
	}
	display_screen();
	process_choice();
} // end display

void rbkscreen :: display_screen()
{
	clrscr();
	currentmember->books_borrowed();
} // end display_screen

void rbkscreen :: process_choice()
{
	cout << "Enter the number of the book you want to return : ";
	int bkno;
	cin >> bkno;
	currentmember->return_book(bkno);
	currentscreen=mem_scr;
}	//end process_choice