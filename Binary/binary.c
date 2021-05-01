#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int max = 0;
    // Changed from 'n' to '0'
    int count = 0;

    // changed from '>=' to '>'
    while(n>0)
    {
        if(n%2==1)
            count++;
        else
            count = 0;
        if(max<count)
            // changed from 'count*2' to 'count'
            max = count;
        n=n/2;
    }
    printf("Maximum consecutive 1 in binary: %d", max);
    return 0;
}