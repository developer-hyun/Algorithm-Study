package com.company;

import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Stack<Integer> stack = new Stack<>();
        int n = Integer.parseInt(br.readLine());
        int result = 0;
        for(int i=0;i<n;i++) {
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            int order = Integer.parseInt(st.nextToken());
            switch (order) {
                case 0 :
                    result -= stack.peek();
                    stack.pop();
                    break;
                default:
                    result += order;
                    stack.push(order);
                    break;

            }
        }
        System.out.println(result);
    }
}
