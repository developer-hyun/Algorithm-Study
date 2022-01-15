package Baekjoon_backtracking;

import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Chess {

    static int n;
    static int list[][];
    static int cnt=0;
    static boolean find_queen = false;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        n = Integer.parseInt(st.nextToken());
        list = new int[n+1][n+1];
        chess(0,0,0);
        System.out.println(cnt);
        br.close();
    }
    static void chess (int right,int left,int queen) throws IOException {
        if(queen == n) {
            cnt++;
            return;
        }
        for(int i=0;i<n;i++) {
            if(list[right][i] != 1 && list[i][left] != 1) {
                list[right][i] = 1; // 행 방문
                list[i][left] = 1; // 열 방문
            } else { // 겹치는 것이 있다
                find_queen = true;
            }
        }
        if(!find_queen) { // 겹치는 것이 있으므로 queen 자리가 될 수 없다
            for(int i=0;i<n;i++) {
                list[right][i] = 0; // 행 방문 취소
                list[i][left] = 0; // 열 방문 취소
            }
            return;
        } else {
            list[right][left] = 2; //queen 자리
            if(right+2 <= n && left+1 <=n) {
                if(list[right+2][left+1] < 1) {
                    chess(right+2,left+1,queen+1);
                }
            }
            else {
                if(right-3 > 0 && list[right-3][left] < 1) {
                    chess(right-3,left+1,queen+1);
                }
            }
        }
        chess(right+1,left,queen+1);
    }
}

