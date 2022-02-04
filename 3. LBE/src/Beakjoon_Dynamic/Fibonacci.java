package Beakjoon_Dynamic;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Fibonacci {

    static int one;
    static int zero;
    static int tmp; //one 값 임시 저장

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int T = Integer.parseInt(br.readLine());

        StringBuilder sb = new StringBuilder();

        while(T>0) {
            int n = Integer.parseInt(br.readLine());
            fibonacci(n);
            sb.append(zero).append(' ').append(one).append('\n');
            T--;
        }
        System.out.println(sb);
    }
    public static void fibonacci(int n) {
        one = 0;
        zero = 0;
        tmp = 0;
        if(n==0) zero = 1;
        else if(n==1) one = 1;
        else {
            zero = 1;
            one = 1;
            for(int i=2;i<n;i++) {
                tmp = one;
                one += zero;
                zero = tmp;
            }
        }
    }
}