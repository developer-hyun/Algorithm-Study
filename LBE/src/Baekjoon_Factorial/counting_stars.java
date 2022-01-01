package Baekjoon_Factorial;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class counting_stars {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        for(int i=0;i<n;i++) {

        }
        counting_stars(n/3,n);
//        System.out.println(counting_stars(n));
    }
    public static int counting_stars (int k,int n) {
        if(k==1) return 1;
        else {
            for(int i=0;i<k*3;i++) { //세로
                for(int j=0;j<k*3;j++) { //가로
                    if(i < k || 2*k <= i) {
//                            System.out.print("*");
                        for(int t=0;i<k;t++) {
                            return counting_stars(k/3,n);
                        }
                    }
                    else {
                        if(j >= k && 2*k > j) System.out.print(" ");
                        else {
//                                System.out.print("*");
                            return counting_stars(k/3,n);
                        }
                    }
                }
                System.out.println();
            }
//            return 1;
//            return counting_stars(k--,n);
        }
        return k;
    }
}
