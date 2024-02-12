#include <stdio.h>
 unsigned char sentence [17];
int main() {
    int index=0 , i=0 ;
    printf ("please enter the sentence :  ") ;
    for (index=0 ;index<17 ;index++){
        scanf("%c", &sentence [index]);
    }
    printf("\nWords at Each Line:\n");
    while(sentence [i]!='\0'){
        if(sentence [i]==' ')
            printf("\n");
        else
            printf("%c",sentence [i]);
        i++;
    }
 return 0 ;
}
