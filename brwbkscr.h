#ifndef _brwbkscr_h_
#define _brwbkscr_h_

#include"scrdef.h"
#include"screen.h"

class brwbkscreen : public screen
{
	void display_screen();
	void process_choice();
	
	public:
	void display();

};

#endif