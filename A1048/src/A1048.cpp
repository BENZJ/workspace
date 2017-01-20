//============================================================================
// Name        : A1048.cpp // Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn = 100010;
int money[505]={0};
int data[maxn];
int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i = 0 ; i <n ; i++){
		scanf("%d",&data[i]);
		money[data[i]]++;
	}
	sort(data,data+n);
	for(int i = 0 ; i<n ; i++){
		if(money[data[i]]!=0){
			money[data[i]]-=1;
			if(money[m-data[i]]!=0){
				printf("%d %d\n",data[i],m-data[i]);
				return 0;
			}
			money[data[i]]+=1;
		}
		if(data[i]*2>m){
			printf("No Solution\n");
			return 0;
		}
	}
	return 0;
}
