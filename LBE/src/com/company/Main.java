package com.company;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuffer sb = new StringBuffer();
        while(true) {
            int n = Integer.parseInt(br.readLine());
            if(n == 0) break;
            int cnt = 0;
            for(int i=n+1;i<=2*n;i++) {
                if(!check_not_decimal(i)){
                    cnt++;
                }
            }
            System.out.println(cnt);
        }
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