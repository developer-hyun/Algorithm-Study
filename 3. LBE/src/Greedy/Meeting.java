package Greedy;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Comparator;
import java.util.StringTokenizer;

public class Meeting {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[][] meeting = new int[n][2];
        for(int i=0;i<n;i++) {
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            meeting[i][0] = Integer.parseInt(st.nextToken());
            meeting[i][1] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(meeting, new Comparator<int[]>() {
            @Override
            public int compare(int[] o, int[] o2) {
                /*
                    반례
                        3
                        3 3
                        2 3
                        3 3
                    result : 3
                */
                if(o[1] == o2[1]) return o[0] - o2[0];
                return o[1] - o2[1]; // 끝나는 시간으로 정렬
            }
        });
        int max = 0;
        int end_time = meeting[0][1];
        for(int i=1;i<n;i++) {
            if(end_time > meeting[i][0]) continue; // 끝나는 시간보다 시작 시간이 작다면 pass
            end_time = meeting[i][1];
            max++;
        }
        System.out.println(max+1); // 자기 자신 포함 + 1
    }
}
