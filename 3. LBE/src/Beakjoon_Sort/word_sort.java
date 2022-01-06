package Beakjoon_Sort;

import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

public class word_sort{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] location = new String[n];
        sc.nextLine();
        for(int i=0;i<n;i++) {
            location[i] = sc.nextLine();
        }
        Arrays.sort(location); // 알파벳 순으로 정렬
        Arrays.sort(location, new Comparator<String>() {
            @Override
            public int compare(String o, String o2) {
                return o.length() - o2.length();
            }
        });

        for(int i=0;i<n;i++) {
            if(i == 0) System.out.println(location[i]);
            else {
                if(!location[i].equals(location[i-1])) {
                    System.out.println(location[i]);
                }
            }
        }
    }
}
