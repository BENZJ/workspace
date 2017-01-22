//============================================================================
// Name        : A1054.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
using namespace std;
int Hash[20000000]={0};
int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	int index;
	int max = 0;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			scanf("%d",&index);
			Hash[index]++	;
			if(Hash[index]>Hash[max]){
				max = index;
			}
		}
	}
	printf("%d\n",max);
	return 0;
}
