import java.io.*;
import java.util.*;

public class Bonus {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int da,ma,ya,de,me,ye;
        de = sc.nextInt();
        me = sc.nextInt();
        ye = sc.nextInt();
        da = sc.nextInt();
        ma = sc.nextInt();
        ya = sc.nextInt();

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
        System.out.println("Bonus for given duration: "+bonus);
    }
}