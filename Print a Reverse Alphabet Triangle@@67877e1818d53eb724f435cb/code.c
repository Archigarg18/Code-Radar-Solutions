// Your code here...
#include <stdio.h>
int main()
{
  int i,j,rows,space;
  scanf("%d",&rows);
  for(i=rows;i>=1;i++){
      for(j=1;j<=i;j++){
       
          printf("%c ",'A'+j-1);
      }
      printf("\n");
  }
   
    return 0;
}