package Sort;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class sortinside{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuffer sb = new StringBuffer();
        String s = br.readLine();
        char[] arr_c = s.toCharArray();
        Arrays.sort(arr_c);
        for(int i=arr_c.length-1;i >=0 ;i--) {
            sb.append(arr_c[i]);
        }
        System.out.println(sb);
    }
}