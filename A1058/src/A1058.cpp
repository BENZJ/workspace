//============================================================================
// Name        : A1058.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	int a1,a2,a3;
	int b1,b2,b3;
	int c1,c2,c3;
	scanf("%d.%d.%d %d.%d.%d",&a1,&a2,&a3,&b1,&b2,&b3);
	int index;
	index = a3+b3;
	c3 = index%29;
	index = index/29;
	index = index + a2 + b2;
	c2 = index % 17;
	index = index /17;
	c1 = index +a1+b1;
	printf("%d.%d.%d",c1,c2,c3);
	return 0;
}
