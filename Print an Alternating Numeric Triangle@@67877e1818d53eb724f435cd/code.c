// Your code here...
#include <stdio.h>
int main()
{
  int i,j,rows,space;
  scanf("%d",&rows);
  for(i=1;i<=rows;i++){
      for(j=i;j<=1;j++){
       
          printf("%d ",j);
      }
      printf("\n");
  }
   
    return 0;
}