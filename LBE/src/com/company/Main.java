package com.company;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int case_cnt = sc.nextInt();
        int cnt = 0;
        for(int i = 0; i<case_cnt;i++) {
            int num = sc.nextInt();
            boolean decimal = true;
            if(num == 1) {
                decimal = false;
            } else if(num > 2) {
                for(int j=2;j<num;j++) {
                    if(num % j == 0) {
                        decimal = false;
                    }
                }
            }
            if(decimal) {
                cnt++;
            }
        }
        System.out.println(cnt);
    }
}
