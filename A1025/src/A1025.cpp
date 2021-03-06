//============================================================================
// Name        : A1025.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
struct Student{
	string id;
	int Rank;
	int mark;
	int group;
	int groupRank;
}stu[30011];
bool cmp(Student a, Student b){
	if(a.mark!=b.mark)
		return a.mark>b.mark;
	else
		return a.id.compare(b.id)<0;
}
int main() {
//	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	int count = 0;
	int n;
	int groupnum[110];
	cin>>n;
	for(int i = 0 ; i < n; i++){
		cin>>groupnum[i];
		int index = count;
		for(int j = 0 ; j < groupnum[i] ; j++){
			cin>>stu[count].id>>stu[count].mark;
			stu[count].group = i;
			count++;
		}
		sort(stu+index,stu+index+groupnum[i],cmp);
		stu[index].groupRank = 1;
		for(int j = 1 ; j < groupnum[i]; j++){
			if(stu[index+j].mark!=stu[index+j-1].mark)
				stu[index+j].groupRank = j+1;
			else
				stu[index+j].groupRank = stu[index+j-1].groupRank;
		}
	}
	sort(stu,stu+count,cmp);
	stu[0].Rank = 1;
	for(int i = 1 ; i < count ; i++){
		if(stu[i].mark!=stu[i-1].mark)
			stu[i].Rank = i+1;
		else
			stu[i].Rank = stu[i-1].Rank;
	}
	cout<< count <<endl;
	for(int i = 0 ; i<count; i ++){
			cout << stu[i].id<<" "<<stu[i].Rank<<" "<<stu[i].group+1<<" "<<stu[i].groupRank<<endl;
	}
	return 0;
}
