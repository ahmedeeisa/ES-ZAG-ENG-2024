#include <stdio.h>
float average ( int arr1[] , int n  );
int main () {
    int p [50 ];
  int i,n ;
    printf("Input the number of elements  in the array :");
    scanf("%d", &n);
    printf("Input the elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
         scanf("%d", &p [i]);
    }
    int length = n ;
    printf (" the average is %f ",  average (  p , length  )) ;

return 0;
}
float average ( int arr1[] , int n  ){
     if (n  ==1  ) {
        return arr1[ 0 ];
     }
        else {
             return ( average ( arr1, n -1 )*(n-1)+ arr1[ n-1 ]) / n ;
        }

}
