#include <stdio.h>
int main() {
  int n ;
  printf("Enter a number ");
  scanf("%d",&n);
  if (n>0){
     printf("%d Is a positive number  \n ",n );
  }
      if (n==2) {
      printf("%d Is a  prime number ",n );}
      if (n==3){
      printf("%d Is a  prime number ",n );}
       if (((n%2==1)&&(n%3==1))&&(n>3)){
           printf("%d Is a prime number",n);
       }
       if ((n>3)&&((n%2==0)||(n%3==0))){
printf("%d Is  not a prime number",n);}
      if(n<=0){
printf(" Enter a positive number " );
}
    return 0;
}
