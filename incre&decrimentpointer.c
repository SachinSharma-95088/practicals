#include<stdio.h>
int main()
{
  int *ptr;
  int x;
  ptr =&x;
  *ptr =0;

  printf("x =%d *ptr =%d\n",x,*ptr);
  
  (*ptr)++;
  printf("x =%d *ptr =%d\n",x,*ptr);
  
  (*ptr)--;
  printf("x =%d *ptr =%d\n",x,*ptr);
  
}
