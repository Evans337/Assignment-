// // program for loop user input 
/*
Name:evans_mutuma
Ref:CT101/G/23738/24
Date:11/11/2030
*/
#include<stdio.h>

int main(){
   int i,start,sum=0,stop;
    printf("enter a value for when to start");
    scanf("%d",&start);
    
    printf(" enter a value for when to stop");
    scanf("%d",&stop);
    
  for(i=start;i<stop;i++)
  {
  printf("%d\n",i);
  sum=sum+start;
  }
  printf("the sum is %d",sum); 
  return 0;
}
