package Baekjoon_Math2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class goldbach {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuffer sb = new StringBuffer();
        int cnt = Integer.parseInt(br.readLine());
        while(cnt > 0) {
            int n = Integer.parseInt(br.readLine());
            int p = n/2;
            int q = n/2;
            for(int i=0;i<n/2;i++) {
                if(!check_not_decimal(p) && !check_not_decimal(q)) {
                    System.out.println(q+ " " + p);
                    break;
                }
                p++;
                q--;
            }
            cnt--;
        }
    }
    public static boolean check_not_decimal(int n) {
        for(int i=2; i<=Math.sqrt(n);i++) {
            if(n % i == 0) {
                return true;
            }
        }
        return false;
    }
}

//public class Main {
//    public static void main(String[] args) throws IOException {
//        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//        StringBuffer sb = new StringBuffer();
//        int cnt = Integer.parseInt(br.readLine());
//        while(cnt > 0) {
//            int n = Integer.parseInt(br.readLine());
//            ArrayList<Integer> decimal = new ArrayList<Integer>();
//            for(int i=0;i<n;i++) {
//                if(!check_not_decimal(i)) {
//                    decimal.add(i);
//                }
//            }
//            int n_i = 0;
//            int n_j = 10001;
//            for(int i=0;i<decimal.size();i++) {
//                for(int j=i;j< decimal.size();j++) {
//                    if(decimal.get(i) + decimal.get(j) == n && decimal.get(j) - decimal.get(i) < n_j - n_i) {
//                        sb = new StringBuffer();
//                        n_i = decimal.get(i);
//                        n_j = decimal.get(j);
//                        sb.append(decimal.get(i)).append(" ").append(decimal.get(j));
//                    }
//                }
//            }
//            System.out.println(sb);
//            cnt--;
//        }
//    }
//    public static boolean check_not_decimal(int n) {
//        for(int i=2; i<=Math.sqrt(n);i++) {
//            if(n % i == 0) {
//                return true;
//            }
//        }
//        return false;
//    }
//}

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
