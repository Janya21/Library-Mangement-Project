#include<process.h>
#include"clibrary.h"
#include<conio.h>
#include<iostream.h>

void main()
{
	clrscr();
	cLibrary mylibrary;
	mylibrary.load();
	mylibrary.run();
} // end main
