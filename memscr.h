#ifndef _memscr_h
#define _memscr_h_
#include"scrdef.h"
#include "screen.h"

class mem_screen : public screen
{
	void display_screen();
	void process_choice();
	public:
		void display();
};

#endif