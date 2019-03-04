#include"lmemscr.h"
#include<iostream.h>
#include<conio.h>
#include"clibrary.h"

void lmemscreen :: display()
{
	if(currentscreen!=listmem_scr)
	{
		return;
	}
	display_screen();
	process_choice();
} // end display

void lmemscreen :: display_screen()
{
	clrscr();
	lib->listofmembers();
} // end display_screen

void lmemscreen :: process_choice()
{
	cout << "Please enter any key to continue: " << endl;
	char ch;
	cin >> ch;
	currentscreen=adm_scr;
}	//end process_choice