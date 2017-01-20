//============================================================================
// Name        : A1050.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
const int maxn=10009;
char a[maxn],b[maxn];
int Hash[359]={0};
int main() {
	gets(a);
	gets(b);
	int lena = strlen(a);
	int lenb = strlen(b);
	for(int i = 0 ; i < lenb ; i++){
		Hash[b[i]]=1;
	}
	for(int i = 0 ; i < lena ; i++){
		if(Hash[a[i]]==0){
			printf("%c",a[i]);
		}
	}
	return 0;
}
