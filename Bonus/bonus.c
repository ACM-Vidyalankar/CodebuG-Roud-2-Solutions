#include <stdio.h>

int main() {
    int da,ma,ya,de,me,ye;
    scanf("%d%d%d", &de,&me,&ye);
    scanf("%d%d%d", &da,&ma,&ya);

    int bonus = 0;
    if(ye==ya){

        if(me < ma){
            // changed '+' to '-'
            bonus = (ma - me) * 500;
        }
        // changed '||' to '&&'
        else if( (me == ma) && (de < da) ){
            bonus = (da - de) * 15;
        }

    }
    else if(ye < ya){
        // changed 'ye-ya' to 'ya-ye'
        bonus = 10000*(ya-ye);
    }
    // changed 'bonus*2' to 'bonus'
    printf("Bonus for given duration: %d", bonus);
    return 0;
}