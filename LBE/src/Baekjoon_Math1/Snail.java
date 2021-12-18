package Baekjoon_Math1;
//import java.util.Scanner;
//
//public class Main {
//    public static void main(String[] args) throws IOException {
//        Scanner sc = new Scanner(System.in);
//        long up = sc.nextInt();
//        long down = sc.nextInt();
//        long tree_length = sc.nextInt();
//        long start = ((tree_length - up)/(up-down)) + 1;
//        if(start == 1) {
//            start++;
//        }
//        System.out.println(start);
//    }
//}

// 실행 시간 단축을 위해 bufferReader , bufferWriter , StringTokenizer 사용
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Snail {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        int up = Integer.parseInt(st.nextToken());
        int down = Integer.parseInt(st.nextToken());
        int tree_length = Integer.parseInt(st.nextToken());
        int start = (tree_length - up);
        int day = up-down;
        
        if(start == 0) {
            System.out.println(1);
        } else {
            if (start == 1) {
                System.out.println(2);
            } else {
                int result = start / day;
                if((result * day) + up >= tree_length) System.out.println(result + 1);
                else System.out.println(result +2);
            }
        }
    }
}