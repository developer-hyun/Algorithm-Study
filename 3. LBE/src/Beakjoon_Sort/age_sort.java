package Beakjoon_Sort;

import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

public class age_sort{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[][] location = new String[n][3];
        sc.nextLine();
        for(int i=0;i<n;i++) {
            String[] s = sc.nextLine().split(" ");
            location[i][0] = s[0];
            location[i][1] = s[1];
            location[i][2] = String.valueOf(i);
        }
        Arrays.sort(location, new Comparator<String[]>() {
            @Override
            public int compare(String[] o, String[] o2) {
                if(Integer.parseInt(o[0]) == Integer.parseInt(o2[0]))  return Integer.parseInt(o[2]) - Integer.parseInt(o2[2]);
                else return Integer.parseInt(o[0]) - Integer.parseInt(o2[0]);
            }
        });
        for(int i=0;i<n;i++) {
            System.out.println(location[i][0] + " " + location[i][1]);
        }
    }
}
