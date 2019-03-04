#include"abkscr.h"
#include<iostream.h>
#include<conio.h>
#include"clibrary.h"

void addbkscreen :: display()
{
	if(currentscreen!=addbk_scr)
	{
		return;
	}
	display_screen();
} // end display

void addbkscreen :: display_screen()
{
	clrscr();
	lib->	addbook();
	currentscreen=adm_scr;
} // end display_screen

