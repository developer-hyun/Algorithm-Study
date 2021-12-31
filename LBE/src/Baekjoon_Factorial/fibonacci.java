package Baekjoon_Factorial;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class fibonacci {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        if(n == 0) System.out.println(1);
        else System.out.println(factorial(n));
    }
    public static int factorial (int n) {
        if(n <= 1) return n;
        else return n*factorial(n-1);
    }
}
