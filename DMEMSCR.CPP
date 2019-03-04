#include"dmemscr.h"
#include<iostream.h>
#include<conio.h>
#include"clibrary.h"

void delmemscreen :: display()
{
	if(currentscreen!=removemem_scr)
	{
		return;
	}
	display_screen();
} // end display

void delmemscreen :: display_screen()
{
	clrscr();
	//lib->removemember();
	currentscreen=adm_scr;
} // end display_screen

