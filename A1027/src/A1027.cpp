//============================================================================
// Name        : A1027.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
using namespace std;
char c[3] = {'A','B','C'};
void myprint(int a){
	if(a<10){
		printf("%d",a);
	}
	else {
		printf("%c",c[a-10]);
	}
}
void chang(int a){
	int i = a%13;
	int j = a/13;
	myprint(j);
	myprint(i);
}
int main() {
	printf("#");
	int index;
	for(int i = 0 ; i < 3 ; i++){
		scanf("%d",&index);
		chang(index);
	}
	printf("\n");
	return 0;
}
