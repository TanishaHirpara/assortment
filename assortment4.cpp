#include<stdio.h>

int main()

{
  int r,c,a[10][10],i,j,b[10][10],d[10][10];
  
  printf("\n Enter the row size = ");
  scanf("%d",&r);
  
  printf("\n Enter the column size = ");
  scanf("%d",&c);
  
  printf("\n Enter the values:");
  
  for(i=0;i<r;i++)
  {
    
	for(j=0;j<c;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
  
  for(i=0;i<r;i++)
  {
    
	for(j=0;j<c;j++)
    {
      d[i][j]=a[i][j]+b[i][j];
    }
  }
  printf("Addition Value = \n");
  
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("\t%d",d[i][j]);
    }
    printf("\n");
  }
  
}

