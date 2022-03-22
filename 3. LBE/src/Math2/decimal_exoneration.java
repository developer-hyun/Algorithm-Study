package Math2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class decimal_exoneration {
    public static void main(String[] args) throws IOException {
        long start = System.currentTimeMillis();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuffer sb = new StringBuffer();
        String[] s = br.readLine().split(" ");
        int m = Integer.parseInt(s[0]);
        int n = Integer.parseInt(s[1]);
        if(m < 2) m++;
        int i = 2;
        while(n >= m) {
            boolean decimal = true;
            if(i >= m) {
                if(decimal) System.out.println(m);
                m++;
                i=2;
            } else {
                if(m % i == 0) {
                    m++;
                    i = 2;
                    decimal = false;
                } else i++;
            }
        }
        long end = System.currentTimeMillis();
        System.out.println(end - start);
    }
}
