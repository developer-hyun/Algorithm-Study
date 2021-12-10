package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        java.lang.String s = sc.nextLine();
        int sum = 0;
        for(int i =0; i<s.length();i++) {
            sum += dial_number_return((int)s.charAt(i));
        }
        System.out.println(sum);
    }

    public static int dial_number_return(int ascii_word) {
        if(ascii_word < 87) { //W 이전의 문자라면
            if(ascii_word < 80) { //P 이전의 문자라면
                if((ascii_word - 64) % 3 == 0) {
                    return (ascii_word - 64) / 3 + 2;
                } else {
                    return ((ascii_word-64) / 3) + 3;
                }
            } else {
                if((ascii_word - 80) < 4) {
                    return 8;
                } else {
                    return 9;
                }
            }
        } else {
            return 10;
        }
    }
}
