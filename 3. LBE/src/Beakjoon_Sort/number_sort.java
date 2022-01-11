package Beakjoon_Sort;

import java.util.Arrays;
import java.util.Scanner;

public class number_sort{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StringBuffer sb = new StringBuffer();
        int n = sc.nextInt();
        int[] location = new int[n];
        for(int i=0;i<n;i++) {
            location[i] = sc.nextInt();
        }
        Arrays.sort(location);
        for(int i=0;i<n;i++) {
            System.out.println(location[i]);
        }
    }
}

