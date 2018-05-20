//============================================================================
// Name        : SortingLab.cpp
// Author      : Shawn Egan & Justin Schnee
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <time.h>
#include "SortingClass.hpp"
using namespace std;

// Quick Sort crashed at array size of 50,000

int main() {
	srand(time(NULL));
	SortingClass newSrtCls = SortingClass(1000,0,999);
	newSrtCls.compareSorts();

}
