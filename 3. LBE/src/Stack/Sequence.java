package Stack;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class Sequence {
    static java.util.Stack<Integer> stack = new Stack<>();
    static int top = 0; //stack top 값
    static StringBuffer sb = new StringBuffer();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        for(int i=0;i<n;i++) {
            int data = Integer.parseInt(br.readLine());
            calculate_stack(data);
        }
        if(sb.lastIndexOf("\n") != -1) sb.deleteCharAt(sb.lastIndexOf("\n"));
        System.out.println(sb);
    }
    public static void calculate_stack(int data) {
        if(stack.empty()) {
            if(top == 0) {
                for(int i=1;i<=data;i++) {
                    sb.append("+").append("\n");
                    stack.push(i);
                }
                sb.append("-").append("\n");
                stack.pop();
            } else {
                sb = new StringBuffer();
                sb.append("NO");
            }
        } else if(stack.peek() > data) {
            for(int i=stack.peek();i>=data;i--) {
                sb.append("-").append("\n");
                stack.pop();
            }
        } else if(stack.peek() == data) {
            sb.append("-").append("\n");
            stack.pop();
        } else if(stack.peek() < data) {
            for(int i=top+1 ; i<=data ; i++) {
                sb.append("+").append("\n");
                stack.push(i);
            }
            sb.append("-").append("\n");
            stack.pop();
        }
        top = Math.max(top,data);
    }
}
