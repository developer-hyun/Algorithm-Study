package Math2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class rectangle {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuffer sb = new StringBuffer();
        String[] s = br.readLine().split(" ");
        int x = Integer.parseInt(s[0]);
        int y = Integer.parseInt(s[1]);
        int w = Integer.parseInt(s[2]);
        int h = Integer.parseInt(s[3]);

        if(w-x < x) {
            x = w-x;
        }

        if(h-y < y) {
            y = h-y;
        }

        if(x > y) {
            System.out.println(y);
        } else {
            System.out.println(x);
        }
    }
}