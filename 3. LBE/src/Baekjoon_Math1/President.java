package Baekjoon_Math1;

import java.util.Scanner;

public class President {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0) {
            int h = sc.nextInt(); //층수
            int w = sc.nextInt(); //호수
            int[][] live_people = new int[h+1][w+1];
            for(int i=0;i<h+1;i++) {
                for(int j=0;j<w+1;j++) {
                    if(i == 0) {
                        live_people[i][j] = j+1;
                    } else {
                        live_people[i][j] = live_people_cnt(i-1,j,live_people);
                    }
                }
            }
            System.out.println(live_people[h][w-1]);
            t--;
        }
    }
    private static int live_people_cnt(int h, int w,int[][] people) { //방 번호 return
        int w_count = 0;
        for(int j=0;j<w+1;j++) {
            w_count += people[h][j];
        }
        return w_count;
    }
}
