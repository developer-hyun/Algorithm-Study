package Baekjoon_Math2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class forth_coordinate {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuffer sb = new StringBuffer();
        String[] coordinate_1 = br.readLine().split(" ");
        String[] coordinate_2 = br.readLine().split(" ");
        String[] coordinate_3 = br.readLine().split(" ");
        int result_x = 0;
        int result_y = 0;
        if(Integer.parseInt(coordinate_1[0]) -Integer.parseInt(coordinate_2[0]) == 0) {
            result_x = Integer.parseInt(coordinate_3[0]);
        } else if(Integer.parseInt(coordinate_1[0])  - Integer.parseInt(coordinate_3[0]) == 0) {
            result_x = Integer.parseInt(coordinate_2[0]);
        } else {
            result_x = Integer.parseInt(coordinate_1[0]);
        }

        if(Integer.parseInt(coordinate_1[1]) -Integer.parseInt(coordinate_2[1]) == 0) {
            result_y = Integer.parseInt(coordinate_3[1]);
        } else if(Integer.parseInt(coordinate_1[1])  - Integer.parseInt(coordinate_3[1]) == 0) {
            result_y = Integer.parseInt(coordinate_2[1]);
        } else {
            result_y = Integer.parseInt(coordinate_1[1]);
        }

        System.out.println(result_x + " " + result_y);
    }
}