//============================================================================
// Name        : A1041.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
using namespace std;
int Hash[10005]={0};
int data[100006];
int main() {
	int n ;
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&data[i]);
		Hash[data[i]]+=1;
	}
	for(int i = 0 ; i < n ; i++){
		if(Hash[data[i]]==1){
			printf("%d",data[i]);
			return 0;
		}
	}
	printf("None");
	return 0;
}
