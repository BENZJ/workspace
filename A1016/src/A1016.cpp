//============================================================================
// Name        : A1016.cpp
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
const int maxn =1010;
int toll[25];
struct Record{
	char name[25];
	int month,dd,hh,mm;
	bool status;

} rec[maxn],temp;
bool cmp(Record a, Record b ){
	int s = strcmp(a.name,b.name);
	return s>0;
}
int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
