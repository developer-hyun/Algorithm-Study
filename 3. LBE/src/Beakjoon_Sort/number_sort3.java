package Beakjoon_Sort;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class number_sort3{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuffer sb = new StringBuffer();
        int n = Integer.parseInt(br.readLine());
        int[] location = new int[n];
        for(int i=0;i<n;i++) {
            location[i] = Integer.parseInt(br.readLine());
        }
        Arrays.sort(location);
        for(int i=0;i<n;i++) {
            sb.append(location[i]).append("\n");
        }
        System.out.println(sb);
    }
}

