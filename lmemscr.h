#ifndef _lmemscr_h_
#define _lmemscr_h_

#include"scrdef.h"
#include"screen.h"

class lmemscreen : public screen
{
	void display_screen();
	void process_choice();
	
	public:
	void display();

};

#endif