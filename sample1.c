#include<stdio.h>
void main()
int a[10],k,n,i;
{
  printf("enter the valve of k");
  scanf("%d",&k);
  printf("enter the valve of n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  { 
    scanf("%d",a[i]);
  }
  printf("the aray element are%d",a[i]);
  if(a[0]>=k)
  {
     i=o;
     while(i<n)
     {
	a[i]=a[i]+1;
	i++;
     }
     else
     {
	printf("condition are not statisfied");
     }
  }    


