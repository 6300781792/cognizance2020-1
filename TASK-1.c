#include<stdio.h>

int main() {
  int n,x;
  scanf("%d",&x);
  
  if(x<=5){
      n=1;
      printf("no of steps are=%d",n);
  }
  else
  if(x % 5 == 0){
      n=x/5;
      printf("no of steps are = %d",n);
  }
  else{
      n=x / 5 + 1;
      printf("no of steps are = %d",n);
      
  }
}