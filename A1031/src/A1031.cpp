//============================================================================
// Name        : A1031.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char c[100];
int main() {
	scanf("%s",c);
	int len = strlen(c);
	int n1 = (len+2)/3;//key in this problem
	int n2 = len - 2 * n1;
	for(int i = 0 ; i < n1-1 ; i++){
		printf("%c",c[i]);
		for(int j = 0 ; j < n2 ; j++){
			printf(" ");
		}
		printf("%c\n",c[len-1-i]);
	}
	for(int i = n1-1; i<n1+n2+1;i++){
		printf("%c",c[i]);
	}
	printf("\n");

	return 0;
}
