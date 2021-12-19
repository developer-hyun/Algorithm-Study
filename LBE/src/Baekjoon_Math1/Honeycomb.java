package Baekjoon_Math1;

import java.util.Scanner;

public class Honeycomb {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long point = sc.nextLong();
        if(point == 1) {
            System.out.println(1);
        } else {
            long six_level = 7;
            long count = 2;
            while(true) {
                if(point <= six_level) {
                    System.out.println(count);
                    break;
                } else {
                    six_level += 6*count;
                    count++;
                }
            }
        }
    }
}
