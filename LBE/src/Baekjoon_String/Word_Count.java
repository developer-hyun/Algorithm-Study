package Baekjoon_String;

import java.util.Scanner;

public class Word_Count {

    public static void main(java.lang.String[] args) {
        while(true) {
            Scanner sc = new Scanner(System.in);
            java.lang.String s = sc.nextLine();
            int cnt = 0;

            for(int i=0; i<s.length();i++) {
                java.lang.String c = java.lang.String.valueOf(s.charAt(i));
                if(c.isBlank()) {
                    cnt++;
                }
            }

            if(java.lang.String.valueOf(s.charAt(0)).isBlank()) {
                cnt--;
            }
            if (java.lang.String.valueOf(s.charAt(s.length()-1)).isBlank()) {
                cnt--;
            }
            System.out.println(cnt + 1);
        }
    }
}
