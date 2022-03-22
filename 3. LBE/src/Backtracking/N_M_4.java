package Backtracking;

import java.io.*;
import java.util.*;

public class N_M_4 {
    static int m,n;

    static int list[];
    static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

    //실행시간 Stringbuilder > BufferedWriter
    static void dfs(int cnt,int stand) throws IOException {
        if(cnt == m) {
            for(int i=0;i<m;i++) {
                bw.write(String.valueOf(list[i])+" ");
            }
            bw.newLine();
            return;
        }

        for(int i =1;i<=n;i++) {
            //이전 값을 파라미터로 주고 받으며 비교하여 크거나 같은 값만 배열에 넣기
            if(i >= stand) {
                list[cnt]=i;
                dfs(cnt+1,list[cnt]);
            }
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        n = Integer.parseInt(st.nextToken());
        m = Integer.parseInt(st.nextToken());
        list = new int [m];
        dfs(0,0);
        br.close();
        bw.flush();
        bw.close();
    }

}
