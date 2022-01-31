#include<stdio.h>
void input(int *a,int *b,int *c)
{
  printf("entre 3 numbers\n");
  scanf("%d%d%d",a,b,c);
}
void cmp(int a,int b,int c,int *large)
{
 if(a>b&&a>c)
 {
   *large=a;
 }
 if (b>c&&b>a)
 {
   *large=b;
 } 
 if(c>a&&c>b)
 {
   *large=c;
 }
}
void output(int *large)
{
  printf("largest number is %d\n",*large);
}
int main()
{
  int a,b,c,large;
  input(&a,&b,&c);
  cmp(a,b,c,&large);
  output(&large);
  return 0;
}