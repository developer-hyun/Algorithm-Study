package Baekjoon_Math2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class Factorization {
    public static void main(String[] args) throws IOException {
//        long start = System.currentTimeMillis();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuffer sb = new StringBuffer();
        int N = Integer.parseInt(br.readLine());
        if (N != 1) {
            int i = 2;
            while(N >= i) {
                if(N % i == 0) {
                    System.out.println(i);
                    N /= i;
                } else {
                    i++;
                }
            }
        }
//        long end = System.currentTimeMillis();
//        System.out.println(end - start);
    }
}

// 소수 체크
//public class Main {
//    public static void main(String[] args) throws IOException {
//        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//        StringBuffer sb = new StringBuffer();
//        int N = Integer.parseInt(br.readLine());
//        if (N != 1) {
//            int operend = N;
//            for(int i=2;i<N;i++) {
//                if(!check_not_decimal(i) && operend % i == 0) {
//                    operend /= i;
//                    sb.append(i);
//                    sb.append(System.getProperty("line.separator"));
//                    i--;
//                }
//            }
//            System.out.println(sb.toString());
//        }
//    }
//    public static boolean check_not_decimal(int n) {
//        for(int i=2; i<n;i++) {
//            if(n % i == 0) {
//                return true;
//            }
//        }
//        return false;
//    }
//}

// 소수 배열로 받아서 하기
//public class Main {
//    public static void main(String[] args) throws IOException {
//        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//        StringBuffer sb = new StringBuffer();
//        int N = Integer.parseInt(br.readLine());
//        if (N != 1) {
//            ArrayList<Integer> decimal = n_decimal_array(N);
//            int operend = N;
//            for (int i = 0; i < N; i++) {
//                for (int j = 0; j < decimal.size(); j++) {
//                    if (operend % decimal.get(j) == 0) {
//                        operend /= decimal.get(j);
//                        sb.append(decimal.get(j));
//                        sb.append(System.getProperty("line.separator"));
//                        break;
//                    }
//                }
//            }
//            System.out.println(sb.toString());
//        }
//    }
//
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
