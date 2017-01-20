//============================================================================
// Name        : A1075.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 10010;
int n,k,m;
struct Student{
	int id;
	bool flag;
	int score[6];
	int score_all;
	int solve;
	int Rank;
}stu[maxn];
bool cmp(Student a ,Student b){
//	if(a.flag!= b.flag)
//		return a.flag>b.flag;
//	else if(a.score_all != b.score_all){
	if(a.score_all != b.score_all){
		return a.score_all>b.score_all;
	}
	else if(a.solve != b.solve){
		return a.solve>b.solve;
	}
	else return a.id<b.id;
}
void init (){
	for(int i = 1 ; i <=n ; i++){
		stu[i].id = i;
		stu[i].score_all = 0;
		stu[i].solve = 0;
		stu[i].flag = false;
		memset(stu[i].score,-1,sizeof(stu[i].score));
	}
}
int score[6];
//int finalNumber=0;
int main() {
	scanf("%d%d%d",&n,&k,&m);
	init();
	for(int i = 1 ; i <= k ; i++){
		scanf("%d",&score[i]);
	}
	int id,pnum,sc;
	for(int i = 0 ; i < m; i++){
		scanf("%d%d%d",&id,&pnum,&sc);
		if(sc== -1 && stu[id].score[pnum]==-1)
			stu[id].score[pnum] = 0 ;
		if(sc!= -1)
			stu[id].flag = true;
		if(stu[id].score[pnum]!=score[pnum]&&sc == score[pnum])
			stu[id].solve++;
		if(stu[id].score[pnum]<sc){
			stu[id].score[pnum] = sc;
		}
	}
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= k; j++)
		{
			if(stu[i].score[j]!=-1)
				stu[i].score_all+=stu[i].score[j];
		}

	}
	sort(stu+1,stu+n+1,cmp);
	stu[1].Rank = 1;
//	for(int i = 2 ; i <=n ; i++){
//		if(stu[i].score_all!=stu[i-1].score_all)
//			stu[i].Rank=i;
//		else
//			stu[i].Rank = stu[i-1].Rank;
//	}
	int r =1;
	for(int i = 1 ; i < n ; i++){
		if(stu[i].flag == false)
			break;
		if(i>1&&stu[i].score_all != stu[i-1].score_all){
			r=i;
		}
		printf("%d %05d %d",r,stu[i].id,stu[i].score_all);
		for(int j = 1 ; j<=k ; j++){
			if(stu[i].score[j]==-1)
				printf(" -");
			else
				printf(" %d",stu[i].score[j]);
		}
		printf("\n");
	}

	return 0;
}
