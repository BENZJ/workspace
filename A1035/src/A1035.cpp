//============================================================================
// Name        : A1035.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
using namespace std;
struct User{
	char id[20];
	char pwd[20];
	bool chang;
	int next;
}us[1010];
int num=0;
void Mychang(User &a){
	a.chang = true;
	for(int i = 0 ; a.pwd[i]!=0;i++){
		char c = a.pwd[i];
		if(c == '1')
			a.pwd[i] = '@';
		else if(c == '0')
			a.pwd[i] = '%';
		else if(c == 'l')
			a.pwd[i] = 'L';
		else if(c == 'O')
			a.pwd[i] = 'o';
	}
}
bool needChang(char *c){
	for(int i = 0 ; c[i]!=0;i++){
		if(c[i]=='1'||c[i]=='0'||c[i]=='l'||c[i]=='O'){
			num++;
			return true;
		}
	}
	return false;
}

int main() {
	int n;
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++){
		scanf("%s%s",us[i].id,us[i].pwd);
		if(needChang(us[i].pwd)){
			Mychang(us[i]);
		}
		else
			us[i].chang=false;
	}
	if(num == 0){
		if(n==1)
			printf("There is %d account and no account is modified",n);
		else {
			printf("There are %d accounts and no account is modified",n);
		}
	}
	else {
		printf("%d\n",num);
		for(int i = 0 ; i < n ; i++){
			if(us[i].chang)
				printf("%s %s\n",us[i].id,us[i].pwd);
		}
	}
	return 0;
}
