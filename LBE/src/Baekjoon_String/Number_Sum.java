package Baekjoon_String;

import java.util.Scanner;

public class Number_Sum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int cnt = sc.nextInt();

        java.lang.String str;
        str = sc.next();

        int sum = 0;

        for(int i=0; i<cnt ; i++) {
            int sum_number = str.charAt(i) - '0';
            sum += sum_number;
        }
        System.out.println(sum);
    }
}
