package Queue;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.StringTokenizer;

public class Queue {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuffer sb = new StringBuffer();
        java.util.Queue<Integer> queue = new LinkedList<>();
        int n = Integer.parseInt(br.readLine());
        int value = 0;
        for (int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            String order = st.nextToken();
            switch (order) {
                case "push":
                    value = Integer.parseInt(st.nextToken());
                    queue.add(value);
                    break;
                case "pop":
                    if (queue.isEmpty()) sb.append("-1").append("\n");
                    else sb.append(queue.poll()).append("\n");
                    break;
                case "size":
                    sb.append(queue.size()).append("\n");
                    break;
                case "empty":
                    if (queue.isEmpty()) sb.append(1).append("\n");
                    else sb.append(0).append("\n");
                    break;
                case "front":
                    if (queue.isEmpty()) sb.append("-1").append("\n");
                    else sb.append(queue.peek()).append("\n");
                    break;
                case "back" :
                    if (queue.isEmpty()) sb.append("-1").append("\n");
                    else sb.append(value).append("\n");
                    break;
            }
        }
        System.out.println(sb.toString());
    }
}
