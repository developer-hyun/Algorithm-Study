package Baekjoon_Math2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class goldbach {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuffer sb = new StringBuffer();
        int cnt = Integer.parseInt(br.readLine());
        while(cnt > 0) {
            int n = Integer.parseInt(br.readLine());
            ArrayList<Integer> decimal = new ArrayList<Integer>();
            for (int i = 2; i <= n; i++) {
                boolean decimal_find = true;
                if (i <= 2) {
                    decimal.add(i);
                } else {
                    for (int j = 2; j < i; j++) {
                        if (i % j == 0) {
                            decimal_find = false;
                        }
                    }
                    if (decimal_find) {
                        decimal.add(i);
                    }
                }
            }
//            ArrayList<Integer> decimal = n_decimal_array(n);

            System.out.println(sb);
            cnt--;
        }
    }
    public static ArrayList n_decimal_array(int n) {
        ArrayList<Integer> decimal = new ArrayList<Integer>();
        for (int i = 2; i <= n; i++) {
            boolean decimal_find = true;
            if (i <= 2) {
                decimal.add(i);
            } else {
                for (int j = 2; j < i; j++) {
                    if (i % j == 0) {
                        decimal_find = false;
                    }
                }
                if (decimal_find) {
                    decimal.add(i);
                }
            }
        }
        return decimal;
    }
}

//public class Main {
//    public static void main(String[] args) throws IOException {
//        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//        StringBuffer sb = new StringBuffer();
//        int cnt = Integer.parseInt(br.readLine());
//        while(cnt > 0) {
//            int n = Integer.parseInt(br.readLine());
//            ArrayList<Integer> decimal = n_decimal_array(n);
//            int n_i = 0;
//            int n_j = 10001;
//            for(int i=0;i<decimal.size();i++) {
//                for(int j=i;j< decimal.size();j++) {
//                    int get_i = decimal.get(i);
//                    int get_j = decimal.get(j);
//                    if(get_i+ get_j == n && get_j- get_i < n_j - n_i) {
//                        sb = new StringBuffer();
//                        n_i = get_i;
//                        n_j = get_j;
//                        sb.append(get_i).append(" ").append(get_j);
//                    }
//                }
//            }
//            System.out.println(sb);
//            System.out.println(n_decimal_array(n));
//            cnt--;
//        }
//    }
//    public static ArrayList n_decimal_array(int n) {
//        ArrayList<Integer> decimal = new ArrayList<Integer>();
//        for (int i = 2; i <= n; i++) {
//            boolean decimal_find = true;
//            if (i <= 2) {
//                decimal.add(i);
//            } else {
//                for (int j = 2; j < i; j++) {
//                    if (i % j == 0) {
//                        decimal_find = false;
//                    }
//                }
//                if (decimal_find) {
//                    decimal.add(i);
//                }
//            }
//        }
//        return decimal;
//    }
//}
