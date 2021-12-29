package Baekjoon_Math2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/*
    유클리드 기하학
        정의 : 어떤 한 점을 중심으로 하고 이에 대한 거리(반지름)로 하나의 원을 그릴 수 있다.
        원 넓이 : pi*r^2
    택시 기하학
        정의 : 한 정점에서 일정한 거리에 있는 점의 집합이라는 원의 정의를 택시 평면에 적용하면 |x| + |y| = r을
              만족시키는 점 (x,y)의 집합이 된다. 이 집합은 원이 아닌 두 대각선의 길이가 같은 다이아몬드 모양의 정사각형을 만든다.
        원 넓이 : 2*r^2
*/
public class taxi_geometry {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int r = Integer.parseInt(br.readLine());

        System.out.println(String.format("%.6f", Math.PI*Math.pow(r,2)));
        System.out.println(String.format("%.6f", 2*Math.pow(r,2)));
    }
}
