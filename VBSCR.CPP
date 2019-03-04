#include"vbkscr.h"
#include<iostream.h>
#include<conio.h>
#include"clibrary.h"

void vbkscreen :: display()
{
	if(currentscreen!=listbrwbk_scr)
	{
		return;
	}
	display_screen();
	process_choice();
} // end display

void vbkscreen :: display_screen()
{
	clrscr();
	currentmember->books_borrowed();
} // end display_screen

void vbkscreen :: process_choice()
{
	cout << "Press any key to continue" << endl;
	char ch;
	cin >> ch;
	currentscreen=mem_scr;
}	//end process_choice