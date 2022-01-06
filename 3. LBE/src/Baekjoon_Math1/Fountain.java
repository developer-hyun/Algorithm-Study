package Baekjoon_Math1;

import java.util.Scanner;

public class Fountain {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int point = sc.nextInt();
        int count = 0;
        boolean turn = true;
        int limit = 1;
        while(turn) {
            if(limit % 2 == 0) {
                for(int i=1;i<limit+1;i++) {
                    count++;
                    if(count == point) {
                        System.out.println(i+"/"+(limit-i+1));
                        turn = false;
                        break;
                    }
                }
            } else {
                for(int i=1;i<limit+1;i++) {
                    count++;
                    if(count == point) {
                        System.out.println((limit-i+1)+"/"+i);
                        turn = false;
                        break;
                    }
                }
            }
            limit++;
        }
    }
}
