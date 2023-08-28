#include<stdio.h>
int main()
{
  int n,i,j,k,c,p,in,del,po;
  int a[100];
  printf("Enter the no.of elements in the array");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter the %d number",i);
    scanf("%d",&a[i]);
  }
    printf("Enter the Element to be searched");
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
      if(a[i]== p)
      {
        printf("The element found at the position %d",i+1);
      }
    }
  }