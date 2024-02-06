#include <stdio.h>

int main() {

    int num;
    char ch;
    printf("Enter a number:  \n");
    scanf("%d", &num);
    printf("Enter any character:  \n");
    scanf("%c", &ch);
    if(num % 2 == 0){
        printf("%c ", ch );
    }
    else {
        if (ch >= 'a' && ch <= 'z'){
            printf("%c", ch-29);
    }
    else if (ch >= 'A' && ch <= 'Z')
           {
             printf("%c ", ch+29);
           }
    }

    return 0;
}
