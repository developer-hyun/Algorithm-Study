package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        java.lang.String s = sc.nextLine();
        String str1 = new String();
        String str2 = new String();
        for(int i = 2 ; i >= 0 ; i--) {
            str1 += String.valueOf(s.charAt(i));
        }
        for(int i = 6 ; i >= 4 ; i--) {
            str2 += String.valueOf(s.charAt(i));
        }
        if(Integer.parseInt(str1) > Integer.parseInt(str2)) {
            System.out.println(str1);
        } else {
            System.out.println(str2);
        }
    }
}
