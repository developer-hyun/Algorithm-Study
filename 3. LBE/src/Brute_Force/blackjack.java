package Brute_Force;

import java.util.Scanner;

public class blackjack
{
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();

        int[] num = new int[n];

        int max = 0;

        for (int i = 0 ; i < n ; i++) {
            num[i] = sc.nextInt();
        }

        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                for(int h=0;h<n;h++) {
                    if(i != j && j != h && i != h) {
                        int sum = num[i]+num[j]+num[h];
                        if(max < sum && sum <= m) {
                            max = sum;
                        }
                    }
                }
            }
        }

        System.out.println(max);
    }
}