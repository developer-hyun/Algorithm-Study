package Backtracking;

import java.util.*;

public class Operator_Push {
    static Stack<Integer> stack = new Stack<>();
    static HashMap<String,Integer> operator = new HashMap<String,Integer>();
    static int[] visit = new int[4];
    static int max = Integer.MIN_VALUE;
    static int min = Integer.MAX_VALUE;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0;i<n;i++) {
            stack.push(sc.nextInt());
        }
        operator.put("+", sc.nextInt());
        operator.put("-", sc.nextInt());
        operator.put("*", sc.nextInt());
        operator.put("/", sc.nextInt());
    }
    public static void operator_push(String oper , int order) {
        int result = 0;
        if(order == 4) return;
        if(operator.get(oper) == 0) return;
        visit[order] = 1;
        int first = stack.pop();
        int second = stack.pop();
        switch (oper) {
            case "+" : result = first + second;
                break;
            case "-" : result = first - second;
                break;
            case "*" : result = first * second;
                break;
            case "/" : result = first /  second;
                break;
        }
        if(result > max) {
            max = result;
            operator.put(oper,operator.get(oper)-1);
        }
        if(result < min) {
            min = result;
        }
    }
}
