package Sort;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class statistics{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuffer sb = new StringBuffer();
        int n = Integer.parseInt(br.readLine());
        int[] location = new int[n];
        int[][] mode = new int[n][2];
        for(int i=0;i<n;i++) {
            location[i] = Integer.parseInt(br.readLine());
        }
        Arrays.sort(location);
        int sum=0;
        int m = 0;
        for(int i=0;i<n;i++) {
            sum += location[i];
            int cnt=0;
            if(i!=n-1 && location[i] == location[i+1]) continue;
            for(int j=0;j<n;j++) {
                if(location[i] == location[j] && i != j) {
                    cnt++;
                }
            }
            mode[m][0] = cnt;
            mode[m++][1] = location[i];
        }
        Arrays.sort(mode, new Comparator<int[]>() {
            @Override
            public int compare(int[] o, int[] o2) {
                if(o[0] == o2[0]) return o[1] - o2[1];
                else return o2[0] - o[0];
            }
        });
        if(Math.abs(((sum % n) * 10 ) / n) < 5) sb.append(Math.round(sum/n)).append("\n");
        else {
            if(Math.round(sum/n) < 0) sb.append(Math.round(sum/n) -1).append("\n");
            else sb.append(Math.round(sum/n) +1).append("\n");
        }
        sb.append(location[(n-1)/2]).append("\n"); // 중앙값
        if(mode.length < 2) sb.append(mode[0][1]).append("\n");
        else {
            if(mode[0][0] == mode[1][0]) sb.append(mode[1][1]).append("\n");
            else sb.append(mode[0][1]).append("\n");
        }
        sb.append(location[n-1] - location[0]).append("\n"); // 범위
        System.out.println(sb);
    }
}
