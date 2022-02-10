package com.company;

import java.io.*;
import java.util.*;

public class Main {
    static Stack<Character> stack = new Stack<>();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        while(true) {
            String bracket = br.readLine();
            if(bracket.equals(".")) break;
            System.out.println(inspect_VPS(bracket));
            stack.clear();
        }
    }
    public static String inspect_VPS(String bracket) {
        for(int i=0;i<bracket.length();i++) {
            switch (bracket.charAt(i)) {
                case '(' :
                    stack.push(bracket.charAt(i));
                    break;
                case ')' :
                    if(!stack.empty()) {
                        if(stack.peek() == '(') stack.pop();
                        else return "no";
                    }
                    else return "no";
                    break;
                case '['  :
                    stack.push(bracket.charAt(i));
                    break;
                case ']' :
                    if(!stack.empty()) {
                        if(stack.peek() == '[') stack.pop();
                        else return "no";
                    }
                    else return "no";
                    break;
            }
        }
        if(stack.empty()) return "yes";
        return "no";
    }
}
