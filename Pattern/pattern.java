import java.io.*;
import java.util.*;

class Pattern {
     
static void printPattern(int r) {
 
    double dist;
 
    for (int i = 0; i <= 2 * r; i++) {
        // changed 'r' to '2 * r'
        for (int j = 0; j <= 2 * r; j++) {
            // changed '(j + r) * (j + r)' to '(j - r) * (j - r)'
            dist = Math.sqrt((i - r) * (i - r) + (j - r) * (j - r));
            if (dist > r - 0.5 && dist < r + 0.5)
            System.out.print("*");
            else
            System.out.print(" ");
        }
    
        System.out.print("\n");
    }
}
 
public static void main(String[] args)
    {   
        Scanner sc = new Scanner(System.in);
        int r;
        r = sc.nextInt();
        // changed 'printPattern()' to 'printPattern(r)'
        printPattern(r);
    }
}