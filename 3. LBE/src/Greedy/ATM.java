package Greedy;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class ATM {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[] atm = new int[n];
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        for(int i=0;i<n;i++) {
            atm[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(atm);
        int sum = 0;
        int total = 0;
        for(int i=0;i<n;i++) {
            sum += atm[i];
            total += sum;
        }
        System.out.println(total);
    }
}
