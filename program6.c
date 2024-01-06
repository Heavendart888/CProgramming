#include<stdio.h>

void add(int a,int b) //formal arguments //function defintion
{
int c;
c=a+b;
printf("Addition is %d",c);
}

void main(){

printf("Enter 2 Numbers:");
int x,y;
scanf("%d%d",&x,&y);
add(x,y);
}
