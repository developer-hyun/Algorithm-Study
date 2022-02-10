package Dynamic;

import java.util.Scanner;

public class Padovan_Sequence {
    static long[] square = new long[101];
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        StringBuilder sb = new StringBuilder();
        int t =sc.nextInt();

        square[0] = 1;
        square[1] = 1;
        square[2] = 1;

        while(t>0) {
            int n = sc.nextInt();
            sb.append(padovan_sequence(n-1)).append("\n");
            t--;
        }
        System.out.println(sb);
    }
    public static long padovan_sequence(int n) {
        if(square[n] == 0) {
            square[n] = padovan_sequence(n-2) + padovan_sequence(n- 3);
        }
        return square[n];
    }
}