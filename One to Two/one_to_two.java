import java.io.*;
import java.util.*;

public class Onetotwo {

    Scanner scanner = new Scanner(System.in);
    String S;
    int t;
    public int setTestCase(){
        t = scanner.nextInt();
        scanner.nextLine();
        return t;
    }
    public void setString(){
        S = scanner.nextLine();
    }
    public void one(){
        int len = S.length();
        // changed 'len+1' to 'len'
        for (int i = 0;i < len; i++){
            // changed '!=' to '=='
            if(i%2 ==0)
                // changed 'i++' to 'i'
                System.out.print(S.charAt(i));
        }

    }

    public void two(){
        int len = S.length();
        // changed 'len+1' to 'len'
        for (int i = 0;i < len; i++){
            // changed '==' to '!='
            if(i%2 !=0)
                // changed 'i++' to 'i'
                System.out.print(S.charAt(i));
        }

    }


    public static void main(String[] args) {

        Onetotwo num = new Onetotwo();
        int T = num.setTestCase();

        for(int a0=0;a0<T;a0++){
            num.setString();
            num.one();
            System.out.print(" ");
            num.two();
            System.out.print("\n");
        }
    }
}