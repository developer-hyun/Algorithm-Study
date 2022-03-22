package Brute_Force;

import java.util.ArrayList;
import java.util.Scanner;

public class bulk {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StringBuffer sb = new StringBuffer();
        int N = sc.nextInt();
        ArrayList<Integer> weight = new ArrayList<Integer>();
        ArrayList<Integer> tall = new ArrayList<Integer>();
        for(int i=0;i<N;i++) {
            weight.add(sc.nextInt());
            tall.add(sc.nextInt());
        }
        for(int i=0;i<N;i++) {
            int tall_g = tall.get(i);
            int weight_g = weight.get(i);
            int rank = 1;
            for(int j=0;j<N;j++) {
                if(tall_g < tall.get(j) && weight_g < weight.get(j)) {
                    rank++;
                }
            }
            sb.append(rank).append(" ");
        }
        System.out.println(sb);
    }
}