// Your code here...

#include <stdio.h>
int main()
{
  int i,j,space,rows;
  scanf("%d",&rows);
  for(i=rows;i>=1;i--){
      for(j=1;j<=rows;j++){
          if(j<=rows-i)
          printf(" ");
          else
          printf("*");
      }
      printf("\n");
  }
   
    return 0;
}