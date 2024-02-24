#include<stdio.h>
struct time {
   int x ;
   int y ;
   int z ;
   };
   int main(){
      struct time a ;
   printf (" Enter start time ");
   printf ("  \n Enter start time in  hours , minutes and seconds ");
   scanf (" %d", &a.x );
   scanf (" %d", &a.y );
   scanf (" %d", &a.z );
   struct time b ;
   printf ("  \n Enter end  time ");
   printf ("  \n Enter end  time in  hours , minutes and seconds ");
   scanf (" %d", &b.x );
   scanf (" %d", &b.y );
   scanf (" %d", &b.z );
   struct time c ;
   c.x  = (a.x - b.x);
    c.y  = (a.y - b.y) ;
     c.z  =  (a.z - b.z ) ;
   printf (" \n  time difference in hours , minutes and seconds  = %d : %d : %d  ", c.x ,c.y , c.z );
   }
