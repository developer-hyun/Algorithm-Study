package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        while(true) {
            Scanner sc = new Scanner(System.in);
            String s = sc.nextLine();
            int cnt = 0;

            for(int i=0; i<s.length();i++) {
                String c = String.valueOf(s.charAt(i));
                if(c.isBlank()) {
                    cnt++;
                }
            }

            if(String.valueOf(s.charAt(0)).isBlank()) {
                cnt--;
            }
            if (String.valueOf(s.charAt(s.length()-1)).isBlank()) {
                cnt--;
            }
            System.out.println(cnt + 1);
        }
    }
}
