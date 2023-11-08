#include "Singleton.h"
#include <iostream>

using namespace std;

int main(int, char**)
{
	SingleTon& foo = SingleTon::GetInstance();

	SingleTon& foo2 = SingleTon::GetInstance();

	return 0;
}