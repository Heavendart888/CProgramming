#include<stdio.h>
//Pointers
void p(int *a){
printf("%d\n",*a);
*a=7;
printf("%d\n",*a);
}


void main(){
  int z=5;
  p(&z);
  printf("%d\n",z);

}
