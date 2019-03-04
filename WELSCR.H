#ifndef _welscr_h
#define _welscr_h_
#include"scrdef.h"
#include "screen.h"

class wel_screen : public screen
{
	private:
		void display_screen();
		void process_choice();
	public:
		void display();
};

#endif