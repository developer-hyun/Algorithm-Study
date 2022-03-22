package Queue;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;

public class Card {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Queue<Integer> queue = new LinkedList<>();
        int n = Integer.parseInt(br.readLine());
        for(int i=1;i<=n;i++) {
            queue.add(i);
        }
        while(queue.size() > 1) {
            queue.poll();
            int back = queue.peek();
            queue.add(back);
            queue.poll();
        }
        System.out.println(queue.peek());
    }
}
