#include <stdio.h>

void one(char arr[]){
        int len = strlen(arr);
        // changed 'len+1' to 'len'
        for (int i = 0;i < len; i++){
            // changed '!=' to '=='
            if(i%2 ==0)
                // changed 'i++' to 'i'
                printf("%c", arr[i]);
        }
}

void two(char arr[]){
       int len = strlen(arr);
       // changed 'len+1' to 'len'
       for (int i = 0;i < len; i++){
           // changed '==' to '!='
           if(i%2 !=0)
                // changed 'i++' to 'i'
                printf("%c", arr[i]);
       }
}

int main() {

    char s[10000];
    int t;
    scanf("%d",&t);
    for (int a0 = 0; a0 < t; a0++){
        scanf("%s", s);
        one(s);
        printf(" ");
        two(s);
        printf("\n");
    }
    return 0;
}