#include<iostream.h>
#include<conio.h>
#include<process.h>
#include"clibrary.h"

void adm_screen :: display()
{
	if(currentscreen!= adm_scr)
	{
		return;
	}

	display_screen();
	process_choice();

}

void adm_screen :: display_screen()
{
	clrscr();
	cout << "\n\n\n\t\t\t\t\tMENU" << endl << endl;
	cout << "\n\t\t\t\t1. Add Book" << endl;
	cout << "\n\t\t\t\t2. List all Books" << endl;
	cout << "\n\t\t\t\t3. Add Member " << endl;
	cout << "\n\t\t\t\t4. List all Members " << endl;
	cout << "\n\t\t\t\t5. Back" << endl;
} // end display_screen

void adm_screen :: process_choice()
{
		int choice;
		cout << "\n\t\t\t\tEnter your choice:(1-5) " << endl;
		cin >> choice;
		switch(choice)
		{
			case 1:
				currentscreen=addbk_scr;
				break;
			case 2:
				currentscreen=listbk_scr;
				break;
			case 3:
				currentscreen=addmem_scr;
				break;
			case 4:
				currentscreen=listmem_scr;
				break;
			case 5:
				currentscreen=welcome_scr;
				break;
			default:
				cout << "Invalid Option!" << endl;
		};
} // end process_choice

