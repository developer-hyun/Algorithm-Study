package Baekjoon_Brute_Force;

import java.util.Scanner;
import java.util.ArrayList;

public class decomposition_sum
{
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int operend = n;
        int ciphers = 0; //자릿수
        boolean find = false;

        while(operend != 0) {
            operend /= 10;
            ciphers++;
        }
        int start;
        if(n-ciphers*9 < 0) {
            start =0;
        } else {
            start = n-ciphers*9;
        }
        for(int i = start;i<n;i++){
            ArrayList<Integer> ciphers_list = ciphers_list(i);
            int sum = 0;
            for(int j=0;j<ciphers_list.size();j++) {
                sum += ciphers_list.get(j);
            }
            if(sum + i == n) {
                find = true;
                System.out.println(i);
                break;
            }
        }
        if(!find) {
            System.out.println(0);
        }
    }
    public static ArrayList ciphers_list(int n) {
        ArrayList<Integer> ciphers = new ArrayList<Integer>();
        while(n!=0) {
            ciphers.add(n%10);
            n /= 10;
        }
        return ciphers;
    }
}