//============================================================================
// Name        : A1073.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char num[10010];
int main() {
//	double n;
//	scanf("%lf",&n);
//	printf("%lf\n",n);
//	return 0;
	scanf("%s",num);
	int positE;
	int indexflag=0;
	int flag = 0;
	int len = strlen(num) ;
	for(int i = 0 ; i <=len ; i++ ){
		if(num[i]=='E'){
			positE = i;
			break;
		}
	}
	if(num[0]=='+'){
		flag = 1;
	}
	if(num[positE+1]=='+')
		indexflag = 1;
	if(flag == 0 ){
		printf("-");
	}
	int index=0;
	for(int i = positE+2 ; num[i]>='0'&&num[i]<='9'&&num[i]!=0;i++){
		index = index * 10 + num[i]-'0';
	}
	if(indexflag==0&&index!=0){
		printf("0.");
		for(int i = 0 ; i < index-1 ; i++){
			printf("0");
		}
		for(int i = 1 ; i < len ; i++){
			if(i == 2)
				continue;
			if(num[i]>='0'&&num[i]<='9'){
				printf("%c",num[i]);
			}else
				break;
		}
	}
	if(indexflag==1&&index!=0){
		index++;
		for(int i = 1 ; i < len ; i++){
			if(i == 2)
				continue;
			if(num[i]>='0'&&num[i]<='9'){
				printf("%c",num[i]);
				index--;
				if(index==0&&num[i+1]!='E')
					printf(".");
			}else
				break;
		}
		while(index>0){
			printf("0");
			index--;
		}
	}

}
