//============================================================================
// Name        : SortingLab.cpp
// Author      : Shawn
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <time.h>
#include "SortingClass.hpp"
using namespace std;


int main() {
	srand(time(NULL));
	SortingClass newSrtCls = SortingClass(100,0,99);
	newSrtCls.compareSorts();

}
