package Baekjoon_Math2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class triangle {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        while(true) {
            String[] coordinate = br.readLine().split(" ");
            if(Integer.parseInt(coordinate[0]) == 0 && Integer.parseInt(coordinate[1]) == 0 && Integer.parseInt(coordinate[2]) == 0) break;
            double heru = Math.pow(Integer.parseInt(coordinate[0]),2);
            double ausar = Math.pow(Integer.parseInt(coordinate[1]),2);
            double auset = Math.pow(Integer.parseInt(coordinate[2]),2);

            if(heru + ausar == auset || heru + auset == ausar || ausar + auset == heru) System.out.println("right");
            else System.out.println("wrong");
        }
    }
}
