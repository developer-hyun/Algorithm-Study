package Sort;

import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

public class location_sort_1{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] location = new int[n][2];
        for(int i=0;i<n;i++) {
            location[i][0] = sc.nextInt();
            location[i][1] = sc.nextInt();
        }
        Arrays.sort(location, new Comparator<int[]>() {
            @Override
            public int compare(int[] o, int[] o2) {
                if(o[0] == o2[0]) return o[1] - o2[1];
                else return o[0] - o2[0];
            }
        });
        for(int i=0;i<n;i++) {
            System.out.println(location[i][0] + " " +location[i][1]);
        }
    }
}
