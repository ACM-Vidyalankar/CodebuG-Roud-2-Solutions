import java.io.*;
import java.util.*;

public class Binary {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
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
        System.out.println("Maximum consecutive 1 in binary: " + max);

    }
}