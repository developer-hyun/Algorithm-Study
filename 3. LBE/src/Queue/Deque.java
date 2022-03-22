package Queue;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.StringTokenizer;

public class Deque {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuffer sb = new StringBuffer();
        java.util.Deque<Integer> deque = new LinkedList<>();
        int n = Integer.parseInt(br.readLine());
        int value = 0;
        for (int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            String order = st.nextToken();
            switch (order) {
                case "push_front":
                    value = Integer.parseInt(st.nextToken());
                    deque.addFirst(value);
                    break;
                case "push_back":
                    value = Integer.parseInt(st.nextToken());
                    deque.addLast(value);
                    break;
                case "pop_front":
                    if (deque.isEmpty()) sb.append("-1").append("\n");
                    else sb.append(deque.removeFirst()).append("\n");
                    break;
                case "pop_back":
                    if (deque.isEmpty()) sb.append("-1").append("\n");
                    else sb.append(deque.removeLast()).append("\n");
                    break;
                case "size":
                    sb.append(deque.size()).append("\n");
                    break;
                case "empty":
                    if (deque.isEmpty()) sb.append(1).append("\n");
                    else sb.append(0).append("\n");
                    break;
                case "front":
                    if (deque.isEmpty()) sb.append("-1").append("\n");
                    else sb.append(deque.peek()).append("\n");
                    break;
                case "back" :
                    if (deque.isEmpty()) sb.append("-1").append("\n");
                    else sb.append(deque.peekLast()).append("\n");
                    break;
            }
        }
        System.out.println(sb.toString());
    }
}
