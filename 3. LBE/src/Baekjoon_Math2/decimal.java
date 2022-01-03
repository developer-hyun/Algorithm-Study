package Baekjoon_Math2;

import java.util.ArrayList;
import java.util.Scanner;

public class decimal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int M = sc.nextInt();
        int N = sc.nextInt();
        int sum = 0;
        ArrayList<Integer> decimal_array = new ArrayList<Integer>();
        for(int i=M;i<=N;i++) {
            boolean decimal = true;
            if(i<=2) {
                if(i!=1) {
                    sum += i;
                    decimal_array.add(i);
                }
            } else {
                for(int j=2;j<i;j++) {
                    if(i % j == 0) {
                        decimal = false;
                    }
                }
                if(decimal) {
                    sum += i;
                    decimal_array.add(i);
                }
            }
        }
        if(sum == 0) {
            System.out.println(-1);
        } else {
            System.out.println(sum);
            System.out.println(decimal_array.get(0));
        }
    }
}