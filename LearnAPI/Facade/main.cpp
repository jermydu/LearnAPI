#include "Facade.h"

int main(int argc, char* argv[])
{
	Facade* pFacade = new Facade();
	pFacade->DoSometing();
	
	delete pFacade;
	pFacade = nullptr;
	return 0;
}