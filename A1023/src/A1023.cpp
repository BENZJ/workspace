//============================================================================
// Name        : A1023.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int Hash1[10]={0},Hash2[10]={0};
char s[21];
char s2[21];
int main() {
	scanf("%s",s);
	for(int i = 0 ; i < strlen(s) ; i++){
//		printf("%d",(int)s[i]-'0');
		Hash1[s[i]-'0']++;
	}
	int j = strlen(s);
	int flag = 0;
	for(j=j-1; j>=0 ; j--){
		int k = s[j]-'0';
		int index = k *2 +flag;
		flag = 0;
		if(index >= 10){
			flag = 1;
			index = index%10;
		}
		s2[j] = index + '0';
		Hash2[index]++;
	}
	if(flag == 1){
		printf("No\n");
		printf("1");
		s2[strlen(s)]=0;
		printf("%s",s2);
		return 0;
	}
	for(j = 0 ; j < 10 ; j++){
		if(Hash1[j]!=Hash2[j])
			break;
	}
	if(j<10){
		printf("No\n");
		s2[strlen(s)]=0;
		printf("%s",s2);
	}
	else{
		s2[strlen(s)]=0;
		printf("Yes\n%s",s2);
	}

	return 0;
}
