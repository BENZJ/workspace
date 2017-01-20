//============================================================================
// Name        : A1083.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

struct Student{
	char name[20] ;
	char id[20];
	int score;
}stu[100];
bool cmp(Student a, Student b){
	if(a.score!=b.score)
		return a.score>b.score;
	else
		return strcmp(a.id,b.id)<0;
}
int main() {
	int n;
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++){
		scanf("%s %s %d",stu[i].name,stu[i].id,&stu[i].score);
	}
	int grad1,grad2;
	scanf("%d%d",&grad1,&grad2);
	sort(stu,stu+n,cmp);
	bool flag=false;
	for(int i = 0 ; i < n ; i ++){
		if(stu[i].score>=grad1&&stu[i].score<=grad2)
		{
			flag = true;
			printf("%s %s\n",stu[i].name,stu[i].id);
		}
	}
	if(!flag)
		printf("NONE");
	return 0;
}
