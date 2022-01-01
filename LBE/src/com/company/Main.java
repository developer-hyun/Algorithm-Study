package com.company;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuffer sb = new StringBuffer();
        int cnt = Integer.parseInt(br.readLine());
        while(cnt > 0) {
            int n = Integer.parseInt(br.readLine());
            int p = n/2;
            int q = n/2;
            for(int i=0;i<n/2;i++) {
                if(!check_not_decimal(p) && !check_not_decimal(q)) {
                    System.out.println(q+ " " + p);
                    break;
                }
                p++;
                q--;
            }
            cnt--;
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