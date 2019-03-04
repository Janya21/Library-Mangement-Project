#ifndef _rbkscr_h_
#define _rbkscr_h_

#include"scrdef.h"
#include"screen.h"

class rbkscreen : public screen
{
	void display_screen();
	void process_choice();
	
	public:
		void display();

};

#endif