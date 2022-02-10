package com.company;

import java.io.*;
import java.util.*;

public class Main {
    static Stack<Character> stack = new Stack<>();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        for(int i=0;i<n;i++) {
            String bracket = br.readLine();
            System.out.println(inspect_VPS(bracket));
            stack.clear();
        }
    }
    public static String inspect_VPS(String bracket) {
        if(bracket.charAt(0) == ')') return "NO";
        stack.push(bracket.charAt(0));
        for(int i=1;i<bracket.length();i++) {
            if(bracket.charAt(i) == '(') stack.push(bracket.charAt(i));
            else {
                if(stack.size() > 0) stack.pop();
                else return "NO";
            }
        }
        if(stack.size() == 0) return "YES";
        return "NO";
    }
}
