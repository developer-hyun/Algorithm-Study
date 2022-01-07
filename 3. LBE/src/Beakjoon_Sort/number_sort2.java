package Beakjoon_Sort;

import java.util.*;

public class number_sort2{
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
            sb.append(location[i]).append("\n");
        }
        System.out.println(sb);
    }
}
