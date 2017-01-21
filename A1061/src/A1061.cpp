//============================================================================
// Name        : A1061.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char date[7][5] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
char str1[60],str2[60],str3[60],str4[60];
bool isSencend(char a){
    if((a>='A'&&a<='N')||(a>='0'&&a<='9'))
        return true;
    else return false;
}
bool isFirst(char a){
    if(a>='A'&&a<='G')
        return true;
    else
        return false;
}
bool islitter(char a){
    if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
        return true;
    else
        return false;
}
int main() {
    scanf("%s %s %s %s",str1,str2,str3,str4);
    int i , j;
    int strlen1 = strlen(str1);
    int strlen2 = strlen(str2);
    int strlen3 = strlen(str3);
    int strlen4 = strlen(str4);
    for(i = 0  ; i < strlen1  ; i++){
        if(str1[i]==str1[i]&&isFirst(str1[i])) {
            printf("%s ", date[str1[i] - 'A']);
            break;
        }
    }
    i++;
    for(;i<strlen1&&i<strlen2;i++){
       if(str1[i]==str2[i]&&isSencend(str1[i])) {
           int time;
           if (str1[i] >= '0' && str1[i] <= '9')
               time = str1[i] - '0';
           else
               time = str1[i] - 'A' + 10;
           printf("%02d:",time);
           break;
       }
    }
    for(i = 0 ; i < strlen3&& i <strlen4;i++){
        if(str3[i]==str4[i]&&islitter(str3[i])){
            break;
        }
    }
    printf("%02d\n",i);
    return 0;
}
