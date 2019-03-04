#ifndef _admscr_h
#define _admscr_h_
#include"scrdef.h"
#include "screen.h"

class adm_screen : public screen
{
	void display_screen();
	void process_choice();
	public:
		void display();
};

#endif