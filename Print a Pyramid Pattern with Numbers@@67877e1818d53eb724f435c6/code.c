// Your code here...
 #include <stdio.h>

int main()
{
  int i,j,space,rows;
  scanf("%d",&rows);
  for(i=1;i<=rows;i++){
      for(space=1;space<=rows-i;space++)
      printf(" ");
      for (j=1;j<=i;j++){
      printf("%d ",j);
  }
  printf("\n");
  }
   
    return 0;
}
