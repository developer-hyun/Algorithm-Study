package Baekjoon_Math2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class turret {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int case_cnt = Integer.parseInt(br.readLine());
        while(case_cnt > 0) {
            String[] s = br.readLine().split(" ");
            int x1 = Integer.parseInt(s[0]);
            int y1 = Integer.parseInt(s[1]);
            int r1 = Integer.parseInt(s[2]);

            int x2 = Integer.parseInt(s[3]);
            int y2 = Integer.parseInt(s[4]);
            int r2 = Integer.parseInt(s[5]);

            int x3 = 0; // marin x
            int y3 = 0; // marin y


//            int cnt = 0;
//            while(true) {
//                if(Math.pow(r1,2) < Math.pow((x1-x3),2) + Math.pow((y1-y3),2)) break;
//                else {
//                    boolean find = false;
//                    while(true) {
//                        if(Math.pow(r1,2) < Math.pow((x1-x3),2) + Math.pow((y1-y3),2)) break;
//                        if(Math.pow(r1,2) == Math.pow((x1-x3),2) + Math.pow((y1-y3),2)) {
//                            find = true;
//                            break;
//                        }
//                        y3++;
//                    }
//                    if(find) {
//                        if(Math.pow(r2,2) == Math.pow((x2-x3),2) + Math.pow((y2-y3),2)){
//                            cnt++;
//                        }
//                    }
//                    y3 = 0;
//                    x3++;
//                }
//            }
//            System.out.println(cnt);
            case_cnt--;
        }
    }
}
