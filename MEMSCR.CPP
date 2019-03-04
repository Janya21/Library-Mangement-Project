#include<iostream.h>
#include<conio.h>
#include<process.h>
#include"clibrary.h"

void mem_screen :: display()
{
	if(currentscreen!= mem_scr)
	{
		return;
	}

	display_screen();
	process_choice();

}

void mem_screen :: display_screen()
{
	clrscr();
	cout << "\n\n\n\t\t\t\t\tMENU" << endl << endl;
	cout << "\n\t\t\t\t1. Borrow Book" << endl;
	cout << "\n\t\t\t\t2. Return Book" << endl;
	cout << "\n\t\t\t\t3. View Borrowed Books" << endl;
	cout << "\n\t\t\t\t4. Back " << endl;

} // end display_screen

void mem_screen :: process_choice()
{
		int choice;
		cout << "\n\tEnter your choice:(1-4) " << endl;
		cin >> choice;
		switch(choice)
		{
			case 1:
				currentscreen=brwbk_scr;
				break;
			case 2:
				currentscreen=returnbk_scr;
				break;
			case 3:
				currentscreen=listbrwbk_scr;
				break;
			case 4:
				currentscreen=welcome_scr;
				break;
			default:
				cout << "Invalid Option!" << endl;
		};

} // end process_choice
		
				