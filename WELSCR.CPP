#include<iostream.h>
#include<conio.h>
#include<process.h>
#include"clibrary.h"
#include <string.h>

void wel_screen :: display()
{
	if(currentscreen!= welcome_scr)
	{
		return;
	}

	display_screen();
	process_choice();

}

void wel_screen :: display_screen()
{
	clrscr();
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t***************WELCOME!**************" << endl;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\tPress X to exit. Press any other alphabet to continue"  << endl;
	char ch;
	cin >> ch;
	if ((ch == 'x') || (ch == 'X'))
	{
		lib->save();
		exit(0);
	}

} // end display_screen

void wel_screen :: process_choice()
{
		int choice;
		clrscr();
		cout << endl;
		cout << endl;
		cout << "\n\n\n\n\n\n\t\t\t\tUser Name: ";
		char strUserName[10];
		cin >> strUserName;
		int r = strcmp(strUserName,"admin");
		if(r!= 0)
		{
			currentmember = NULL;
			currentmember = lib->getmember(strUserName);
			if (currentmember != NULL)
			{
				currentscreen=mem_scr;
			}
			else
			{
				cout << "Incorrect user name!" << endl;
				cout << "Press any key to continue...";
				char ch;
				cin >> ch;
				currentscreen = welcome_scr;
			}
		}
		else
		{
			currentscreen=adm_scr;
		}
} // end process_choice

