#ifndef _lbkscr_h_
#define _lbkscr_h_

#include"scrdef.h"
#include"screen.h"

class listbkscreen : public screen
{
	void display_screen();
	void process_choice();

	public:
	void display();

};

#endif