//============================================================================
// Name        : my.cpp // Author      : // Version     : // Copyright   : Your copyright notice // Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
char course[4]={'A','C','M','E'};
struct Student{
	int id;
	int mark[4];
}stu[2005];
int now ;
int Rank[1000000][4]={0};
bool mycmp(Student a, Student b){
	return a.mark[now]>b.mark[now];
}
int main() {
//	printf("hello world");
	int n , m ;
	scanf("%d%d",&n,&m);
	for(int i = 0 ; i < n ; i++){
		scanf("%d%d%d%d",&stu[i].id,&stu[i].mark[1],&stu[i].mark[2],&stu[i].mark[3]);
		stu[i].mark[0]= stu[i].mark[1]+stu[i].mark[2]+stu[i].mark[3];
	}
	for( now = 0 ; now < 4 ; now++){
		sort(stu,stu+n,mycmp);
		Rank[stu[0].id][now]=1;
		for(int i = 1 ; i < n ; i++){
			if(stu[i].mark[now]!=stu[i-1].mark[now])
				Rank[stu[i].id][now]=i+1;
			else
				Rank[stu[i].id][now]=Rank[stu[i-1].id][now];
		}
	}
	int query;
	for(int i = 0 ; i < m ; i++){
		scanf("%d",&query);
		if(Rank[query][0]==0){
			printf("N/A\n");
		}else{
			int k=0;
			for(int j = 0 ; j < 4; j++){
				if(Rank[query][k]>Rank[query][j])
					k = j;
			}
			printf("%d %c\n",Rank[query][k],course[k]);
		}
	}
	return 0;

}
