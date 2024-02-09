#include <stdio.h>
int main()
         {
            int n, bitnum,fun, set , clear , toggle  ;
            printf ("enter any number : \n  ");
            scanf ("%d", &n);
            printf(" Enter the bit number : \n");
            scanf ("%d", &bitnum);
            printf ("Enter the number of function  (1 to set ) , (2 to clear ) , (3 to toggle ):  \n");
             scanf ("%d", &fun);
             set = ( n | (1 << bitnum))  ;
             clear=(n & ~(1 << bitnum)) ;
             toggle=(n ^ (1 << bitnum));
    switch(fun){
         case 1 :
             printf(" The number after setting is %d  " , set );
            break;
            case 2 :
                printf("The number after clearing the bit is %d " , clear );
            break;
          case 3 :
              printf("The number after toggling the bit is %d ", toggle );
            break;
          default:
            printf("Enter a number between 1 : 3 ");
             }
         return 0 ;
         }
