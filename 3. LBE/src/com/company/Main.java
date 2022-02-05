package com.company;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String expression = br.readLine();
        String operand = "";
        int result = 0;
        boolean minus = false;
        boolean plus = false;
        for(int i=0;i<expression.length();i++) {
            if(expression.charAt(i) == '+') {
                if(minus) result -= Integer.parseInt(operand);
                else result += Integer.parseInt(operand);
                operand = "";
            } else if(expression.charAt(i) == '-') {
                if(!minus && !plus) result += Integer.parseInt(operand);
                else result -=  Integer.parseInt(operand);
                minus = true;
                operand = "";
            } else {
                operand += expression.charAt(i);
                if(i==expression.length()-1) {
                    if(minus) result -= Integer.parseInt(operand);
                    else result += Integer.parseInt(operand);
                }
            }
        }
        System.out.println(result);
    }
}
