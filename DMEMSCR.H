#ifndef _dmemscr_h_
#define _dmemscr_h_

#include"scrdef.h"
#include"screen.h"

class delmemscreen : public screen
{
	void display_screen();
	void process_choice();
	
	public:
	void display();

};

#endif