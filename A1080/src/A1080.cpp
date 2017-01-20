//============================================================================
// Name        : A1080.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
struct Student{
	bool flag;
	int wish[5];
	int GE,GI;
	int id;
	int score;
	int Rank;
}stu[40010];
struct School{
	int num;
	int plan;
	int last;
	int people[40010];
}sch[110];
bool cmp(Student a , Student b){
	if(a.score!=b.score)
		return a.score>b.score;
	else if(a.GE!=b.GE)
		return a.GE>b.GE;
	else
		return a.id<b.id;
}
int main() {
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	for(int i = 0 ; i < m ; i++){
		scanf("%d",&sch[i].plan);
		sch[i].last = -1;
	}
	for(int i = 0 ; i < n ; i++){
		stu[i].id = i;
		scanf("%d%d",&stu[i].GE,&stu[i].GI);
		stu[i].score = stu[i].GE+stu[i].GI;
		for(int j = 0 ; j < k ; j++){
			scanf("%d",&stu[i].wish[j]);
		}
	}
	sort(stu,stu+n,cmp);
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < k ; j++){
			int schnum = stu[i].wish[j];
			if(sch[schnum].num<sch[schnum].plan
					||(sch[schnum].num>=sch[schnum].plan&&sch[schnum].last!=-1&&(stu[sch[schnum].last].GE==stu[i].GE&&stu[sch[schnum].last].GI==stu[i].GI))){
				int index = sch[schnum].num++;
				sch[schnum].people[index]=stu[i].id;
				sch[schnum].last = i;
				break;
			}
//			else if(sch[schnum].num>=sch[schnum].plan&&sch[schnum].last!=-1&&(stu[sch[schnum].last].score==stu[i].score)){
//
//			}
		}
	}
	for(int i = 0 ; i < m ; i ++){
		sort(sch[i].people,sch[i].people+sch[i].num);
		for(int j = 0 ; j < sch[i].num; j++){
			if(j == 0){
				printf("%d",sch[i].people[j]);
			}
			else
				printf(" %d",sch[i].people[j]);
		}
		printf("\n");
	}
	return 0;
}
