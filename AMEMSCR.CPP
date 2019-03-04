#include"amemscr.h"
#include<iostream.h>
#include<conio.h>
#include"clibrary.h"

void addmemscreen :: display()
{
	if(currentscreen!=addmem_scr)
	{
		return;
	}
	display_screen();
	process_choice();
} // end display

void addmemscreen :: display_screen()
{
	clrscr();
	cout << "Adding a New member to the Library...  " << endl;
} // end display_screen

void addmemscreen :: process_choice()
{
	lib->addmember();
	currentscreen=adm_scr;
}	//end process_choice