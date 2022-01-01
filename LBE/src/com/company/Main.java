package com.company;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
/*
    원과 원의 관계 (원의 방정식)
   : 두 원의 반지름을 r1,r2 중심 간의 거리를 d라 하면
   1. 밖에 있다 d > r1+r2
   2. 외접 한다 d = r1+r2
   3. 두 점에서 만난다 |r1-r2| < d < r1+r2
*/
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int case_cnt = Integer.parseInt(br.readLine());
        while(case_cnt > 0) {
            String[] s = br.readLine().split(" ");
            int x1 = Integer.parseInt(s[0]);
            int y1 = Integer.parseInt(s[1]);
            int r1 = Integer.parseInt(s[2]); // 반지름

            int x2 = Integer.parseInt(s[3]);
            int y2 = Integer.parseInt(s[4]);
            int r2 = Integer.parseInt(s[5]); // 반지름

            double distance = Math.sqrt(Math.pow(x2-x1,2) + Math.pow(y2-y1,2));
            int radius_difference = Math.abs(r1-r2);

            if(radius_difference < distance && distance < r1+r2) {
                System.out.println(2);
            } else if(r1+r2 == distance || (radius_difference == distance && r1 != r2) ){
                System.out.println(1);
            } else if(r1+r2 < distance || distance < radius_difference) {
                System.out.println(0);
            } else if(distance == 0 && r1 == r2){
                System.out.println(-1);
            }
            case_cnt--;
        }
    }
}

//public class Main {
//    public static void main(String[] args) throws IOException {
//        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//        int case_cnt = Integer.parseInt(br.readLine());
//        while(case_cnt > 0) {
//            String[] s = br.readLine().split(" ");
//            int x1 = Integer.parseInt(s[0]);
//            int y1 = Integer.parseInt(s[1]);
//            int r1 = Integer.parseInt(s[2]);
//
//            int x2 = Integer.parseInt(s[3]);
//            int y2 = Integer.parseInt(s[4]);
//            int r2 = Integer.parseInt(s[5]);
//
//            int x3 = 0; // marin x
//            int y3 = 0; // marin y
//
//
//            int cnt = 0;
//            while(true) {
//                if(Math.pow(r1,2) < Math.pow((x1-x3),2) + Math.pow((y1-y3),2)) break;
//                else {
//                   boolean find = false;
//                    while(true) {
//                        if(Math.pow(r1,2) < Math.pow((x1-x3),2) + Math.pow((y1-y3),2)) break;
//                        if(Math.pow(r1,2) == Math.pow((x1-x3),2) + Math.pow((y1-y3),2)) {
//                            find = true;
//                            break;
//                        }
//                        y3++;
//                    }
//                   if(find) {
//                        if(Math.pow(r2,2) == Math.pow((x2-x3),2) + Math.pow((y2-y3),2)){
//                            cnt++;
//                        }
//                    }
//                    y3 = 0;
//                    x3++;
//                }
//            }
//            System.out.println(cnt);
//            case_cnt--;
//        }
//    }
//}
