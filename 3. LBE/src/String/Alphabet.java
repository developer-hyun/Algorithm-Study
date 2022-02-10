package String;

import java.util.Scanner;

public class Alphabet {
    public static void main(java.lang.String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        java.lang.String s = sc.next();

        for(int i=97;i<123;i++) {
            boolean find = false;
            int result=0;
            for (int j = 0; j < s.length(); j++) {
                if (i == (int) s.charAt(j)) {
                    result = j;
                    find = true;
                    break;
                }
            }
            if (!find) {
                result = -1;
            }
            System.out.println(result);
        }
    }
}
