#ifndef _abkscr_h_
#define _abkscr_h_

#include"scrdef.h"
#include"screen.h"

class addbkscreen : public screen
{
	void display_screen();
	void process_choice();
	
	public:
	void display();

};

#endif