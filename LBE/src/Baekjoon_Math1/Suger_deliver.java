package Baekjoon_Math1;

import java.util.Scanner;

public class Suger_deliver {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int deliver = sc.nextInt();
        int case1 = deliver_divide_one_number(deliver,5);
        int case2 = deliver_divide_one_number(deliver,3);
        int case3 = deliver_divide_two_number(deliver,5,3);

        if(case1 == 10000 && case2 == 10000 && case3 == 10000) {
            System.out.println(-1);
        } else {
            if(case1 < case2) {
                if(case1 < case3) {
                    System.out.println(case1);
                } else {
                    if(case2 < case3) {
                        System.out.println(case2);
                    } else {
                        System.out.println(case3);
                    }
                }
            } else {
                if(case2 < case3) {
                    System.out.println(case2);
                } else {
                    if(case1 < case3) {
                        System.out.println(case1);
                    } else {
                        System.out.println(case3);
                    }
                }
            }
        }
    }

    private static int deliver_divide_one_number(int deliver, int i) {
        if(deliver % i == 0) {
            return deliver/i;
        } else {
            return 10000;
        }
    }

    private static int deliver_divide_two_number(int deliver, int i, int i1) {
        int min = 10000;
        int deliver_i = deliver / i;
        for(int f=1;f<deliver_i+1;f++) {
            int tmp = deliver - i*f;
            if(tmp % i1 == 0) {
                if(min > tmp / i1 + f) {
                    min = tmp / i1 + f;
                }
            }
        }
        return min;
    }
}
