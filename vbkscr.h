#ifndef _vbkscr_h_
#define _vbkscr_h_

#include"scrdef.h"
#include"screen.h"

class vbkscreen : public screen
{
	void display_screen();
	void process_choice();
	
	public:
	void display();

};

#endif