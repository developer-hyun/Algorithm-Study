package Beakjoon_Greedy;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class GasStation {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        long[] distance = new long[n-1];
        long[] city = new long[n];
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        for(int i=0;i<n-1;i++) {
            distance[i] = Integer.parseInt(st.nextToken());
        }
        st = new StringTokenizer(br.readLine(), " ");
        for(int i=0;i<n;i++) {
            city[i] = Integer.parseInt(st.nextToken());
        }
        long oil = 0;
        long stan = 0;
        for(int i=0;i<n-1;i++) {
            if(i==0) {
                oil += distance[i] * city[i];
                stan = city[i];
                continue;
            }
            if(stan > city[i]) {
                stan = city[i];
            }
            oil += stan * distance[i];
        }
        System.out.println(oil);
    }
}
