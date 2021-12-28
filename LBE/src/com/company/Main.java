package com.company;
/*
    에라토스테네스의 체 : 소수(prime number) 판별 알고리즘
    ex ) 8의 경우 2*4 = 4*2 와 같은 대칭을 이루기 때문에
    제곱근까지만 약수의 여부를 검증하면 됨
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuffer sb = new StringBuffer();
        String[] s = br.readLine().split(" ");
        int m = Integer.parseInt(s[0]);
        int n = Integer.parseInt(s[1]);
        for(int i=m;i<=n;i++) {
            if(i!= 1) {
                if(!check_not_decimal(i)) {
                    sb.append(i).append("\n");
                }
            }
        }
        System.out.println(sb);
    }
    public static boolean check_not_decimal(int n) {
        for(int i=2; i<=Math.sqrt(n);i++) {
            if(n % i == 0) {
                return true;
            }
        }
        return false;
    }
}