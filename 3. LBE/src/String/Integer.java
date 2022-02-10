package String;

import java.util.Scanner;

public class Integer {

    public static void main(java.lang.String[] args) {
        Scanner sc = new Scanner(System.in);
        java.lang.String s = sc.nextLine();
        java.lang.String str1 = new java.lang.String();
        java.lang.String str2 = new java.lang.String();
        for(int i = 2 ; i >= 0 ; i--) {
            str1 += java.lang.String.valueOf(s.charAt(i));
        }
        for(int i = 6 ; i >= 4 ; i--) {
            str2 += java.lang.String.valueOf(s.charAt(i));
        }

        //Baekjoon_String.Integer.parseInt main에서는 작동하는데 여기서는 안됨
//        if(Baekjoon_String.Integer.parseInt(str1) > Baekjoon_String.Integer.parseInt(str2)) {
            System.out.println(str1);
//        } else {
//            System.out.println(str2);
//        }
    }

}