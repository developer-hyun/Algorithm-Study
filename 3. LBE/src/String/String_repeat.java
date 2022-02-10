package String;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class String_repeat {

    public static void main(String[] args) {
        // write your code here
        Scanner sc = new Scanner(System.in);
        int cnt = sc.nextInt();

        for(int c = 0; c < cnt ; c++) {
            List result = new ArrayList();

            if (c == 0) {
                sc.nextLine();
            }

            java.lang.String s = sc.nextLine();

            for (int i = 0; i < s.length() - 2; i++) {
                for (int j = 0; j < s.charAt(0) - 48; j++) {
                    result.add(s.charAt(i + 2));
                }
            }

            java.lang.String result_string = "";
            for (int i=0;i<result.size();i++) {
                result_string += result.get(i);
            }
            System.out.println(result_string);
        }
    }
}