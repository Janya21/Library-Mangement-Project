#ifndef _dbkscr_h_
#define _dbkscr_h_

#include"scrdef.h"
#include"screen.h"

class delbkscreen : public screen
{
	void display_screen();
	void process_choice();
	
	public:
	void display();

};

#endif