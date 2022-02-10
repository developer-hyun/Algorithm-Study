package Stack;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Stack {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//        Stack<Integer> stack = new Stack<>();
        int n = Integer.parseInt(br.readLine());
        for(int i=0;i<n;i++) {
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            String order = st.nextToken();
            switch (order) {
                case "push" :
                    int value = Integer.parseInt(st.nextToken());
//                    stack.push(value);
                    break;
                case "pop" :
//                    if(stack.empty()) System.out.println("-1");
//                    else System.out.println(stack.pop());
                    break;
                case "size" :
//                    System.out.println(stack.size());
                    break;
                case "empty" :
//                    if(stack.empty()) System.out.println(1);
//                    else System.out.println(0);
                    break;
                case "top" :
//                    if(stack.empty()) System.out.println(-1);
//                    else System.out.println(stack.peek());
                    break;
            }
        }
    }
}
