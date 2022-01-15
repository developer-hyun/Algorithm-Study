package Baekjoon_backtracking;

import java.util.*;
import java.lang.*;
import java.io.*;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class N_M_2 {
    static int m,n;
    static int list[],check[];
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        check = new int[n+1];
        list = new int [n+1];
        dfs(0,0);
    }
    static void dfs(int idx,int cnt) {

        if(cnt == m) {
            for(int i=0;i<m;i++) {
                System.out.print(list[i]+" ");
            }
            System.out.println("");
            return;
        }
        //기준 idx 값을 준다 , 오름차순이므로 기준 idx 부터 시작
        for(int i =idx+1;i<=n;i++) {
            if(check[i]==1) continue;
            check[i]=1;
            list[cnt]=i;
            dfs(i,cnt+1);
            check[i]=0;
        }
    }
}
