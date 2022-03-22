package Queue;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Josephus {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        StringBuffer sb = new StringBuffer();
        Queue<Integer> queue = new LinkedList<>();
        sb.append("<");
        int n = Integer.parseInt(st.nextToken());
        int idx = Integer.parseInt(st.nextToken());
        for(int i=1;i<=n;i++) {
            queue.add(i);
        }
        int cnt = 1;
        while(queue.size() > 1) {
            if(cnt == idx) {
                sb.append(queue.poll()).append(",").append(" ");
                cnt = 1;
                continue;
            }
            int tmp = queue.poll();
            queue.add(tmp);
            cnt++;
        }
        sb.append(queue.poll()).append(">");
        System.out.println(sb.toString());
    }
}
