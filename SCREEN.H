#ifndef _screen_h_
#define _screen_h_

class cLibrary;
class member;

extern int currentscreen;
class screen
{
	protected:
	cLibrary *lib;
	member* m;
	void display_screen();
	void process_choice();
	
	public:
	void display();
	void setlibrary(cLibrary* ptr)
	{
		lib = ptr;
	}
	void setmember(member *ptrmember)
	{
		m=ptrmember;
	}

}; // end screen

#endif