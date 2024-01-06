#include<stdio.h>


int add(int a,int b) //formal arguments //function definition
{
int c;
c=a+b;
return c;
}

void main(){

printf("Enter 2 Numbers:");
int x,y;
scanf("%d%d",&x,&y);

printf("Addition is %d",add(x,y));

}
