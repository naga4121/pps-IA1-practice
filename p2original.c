#include<stdio.h>
int input()
{
  int a;
  printf("enter a value\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  if(a>b&&a>c)
  {
    printf("a is large\n");
  }
  else if(b>a&&b>c)
  {
    printf("b is large\n");
  }
  else if(c>a&&c>b)
  {
    printf("c is large\n");
  }
}
int main()
{
  int a,b,c;
  a=input();
  b=input();
  c=input();
  cmp(a,b,c);
  return 0;
}