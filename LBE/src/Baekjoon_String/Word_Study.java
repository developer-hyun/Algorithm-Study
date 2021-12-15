package Baekjoon_String;

import java.util.Scanner;

public class Word_Study {

    public static void main(java.lang.String[] args) {
        Scanner sc = new Scanner(System.in);
        java.lang.String s = sc.next().toUpperCase();
        java.lang.String dupCheck = " ";
        for(int i=0;i<s.length();i++) {
            boolean dup = false;
            for(int j=0;j<dupCheck.length();j++) {
                if(s.charAt(i) == dupCheck.charAt(j)) {
                    dup = true;
                }
            }
            if(!dup) {
                dupCheck += s.charAt(i);
            }
        }
        int max = 0;
        java.lang.String word = "";
        for(int i=1;i<dupCheck.length();i++) {
            int cnt = 0;
            for(int j=0;j<s.length();j++) {
                if (s.charAt(j) == dupCheck.charAt(i)) {
                    cnt++;
                }
            }
            if(cnt > max) {
                max = cnt;
                word = java.lang.String.valueOf(dupCheck.charAt(i));
            } else if(cnt == max) {
                word = "?";
            }
        }
        System.out.println(word);
    }
}

