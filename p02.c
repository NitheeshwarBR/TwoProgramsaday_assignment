#include<stdio.h>
int input_side()
{
  int x;
  printf("Enter the side \n");
  scanf("%d",&x);
  return x;
}
int check_scalene(int a,int b,int c)
{
  if(a!=b && b!=c && c!=a)
  {
    return 0;
  }
  else {
    return 1;
  }
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene==0)
  {
    printf("The triangle with sides %d %d and %d is a scalene triangle\n",a,b,c);
  }
  else{
    printf("The triangle with sides %d %d and %d is not scalene triangle\n",a,b,c);
  }
}
int main()
{
  int a;
  a=input_side();
  int b=input_side();
  int c=input_side();
  int result=check_scalene(a,b,c);
  output(a,b,c,result);
  return 0;
}
