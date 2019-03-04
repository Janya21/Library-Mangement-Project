#ifndef _amemscr_h_
#define _amemscr_h_

#include"scrdef.h"
#include"screen.h"

class addmemscreen : public screen
{
	void display_screen();
	void process_choice();
	
	public:
	void display();

};

#endif