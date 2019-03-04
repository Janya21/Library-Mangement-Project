#include"lbkscr.h"
#include<iostream.h>
#include<conio.h>
#include"clibrary.h"

void listbkscreen :: display()
{
	if(currentscreen!=listbk_scr)
	{
		return;
	}
	display_screen();
	process_choice();
} // end display

void listbkscreen :: display_screen()
{
	clrscr();
	lib->listofbooks();
} // end display_screen

void listbkscreen :: process_choice()
{
	cout << "Press any key to continue" << endl;
	char ch;
	cin >> ch;
	currentscreen=adm_scr;
}		//end process_choice