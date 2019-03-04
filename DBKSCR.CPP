#include"dbkscr.h"
#include "clibrary.h"
#include<iostream.h>
#include<conio.h>

void delbkscreen :: display()
{
	if(currentscreen!=removebk_scr)
	{
		return;
	}
	display_screen();
	process_choice();
} // end display

void delbkscreen :: display_screen()
{
	clrscr();
	//lib->deletebook();
} // end display_screen

void delbkscreen :: process_choice()
{
	cout << "Press any key to continue" << endl;
	char ch;
	cin >> ch;
	currentscreen=adm_scr;
}		// end process_choice