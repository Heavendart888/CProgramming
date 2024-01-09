#include<stdio.h>
#define pi 3.14
#define x 1
void main(){
int r=6;
printf("%f",pi*r*r);

#if x
printf("hello");
#else
printf("Bye");
#endif

}
