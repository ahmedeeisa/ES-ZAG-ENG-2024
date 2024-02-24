#include <stdio.h>
struct salary {
    int x ;
    int y ;
    int z ;
} ;
int main() {
    int q;
    struct salary a;
    printf("Enter salary  , bonus & deduction for Ahmed \n ");
     scanf (" %d", &a.x );
   scanf (" %d", &a.y );
   scanf (" %d", &a.z );
    struct salary b;
    printf("Enter salary  , bonus & deduction  for amr \n ");
   scanf (" %d", &b.x );
   scanf (" %d", &b.y );
   scanf (" %d", &b.z );
struct salary c;
    printf("Enter salary  , bonus & deduction  for waleed \n ");
    scanf (" %d", &c.x );
   scanf (" %d", &c.y );
   scanf (" %d", &c.z );
    q = a.x + a.y - a.z + b.x + b.y - b.z + c.x - c.z + c.y  ;
    printf (" \n the all value  is :  %d ", q );
}
