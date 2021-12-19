package com.company;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while(T>0) {
            long x = sc.nextInt();
            long y = sc.nextInt();

            T--;
        }
    }
}

/* BigInteger */
//import java.util.Scanner;
//import java.math.BigInteger;
//
//public class Main {
//    public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//        int T = sc.nextInt();
//        while(T>0) {
//            BigInteger x = new BigInteger(sc.next());
//            BigInteger y = new BigInteger(sc.next());
//            BigInteger move_cnt = min_space_move(y.subtract(x).subtract(BigInteger.ONE),BigInteger.valueOf(0),BigInteger.valueOf(0),BigInteger.valueOf(0));
//            System.out.println(move_cnt.add(BigInteger.ONE));
//            T--;
//        }
//    }
//    public static BigInteger min_space_move(BigInteger distance,BigInteger move_distance,BigInteger move_length,BigInteger move_cnt) {
//        if(distance.equals(move_distance)) { // 이동을 다 한 경우 이동 횟수 리턴
//            return move_cnt.add(BigInteger.ONE);
//        } else {
//            if(move_length.compareTo(BigInteger.valueOf(0)) == 0) { // 무조건 1 이동
//                move_distance = move_distance.add(BigInteger.ONE); // 1 이동
//                move_cnt = move_cnt.add(BigInteger.ONE); // 이동 횟수 추가
//                return min_space_move(distance,move_distance,BigInteger.valueOf(1),move_cnt);
//            } else {
//                BigInteger if1 = move_distance.add(move_length);
//                BigInteger if3 = move_length.add(BigInteger.ONE);
//                BigInteger if2 = move_distance.add(if3);
//                if(if1.compareTo(distance) == 1) { // -1만큼 이동해야 할 경우
//                    move_length = move_length.subtract(BigInteger.ONE);
//                    move_distance = move_distance.add(move_length); // move_length 만큼 이동
//                    move_cnt = move_cnt.add(BigInteger.ONE); // 이동 횟수 추가
//                    return min_space_move(distance,move_distance,move_length,move_cnt);
//                } else if(if2.compareTo(distance) == 1) { // 이동한 만큼 이동해야 할 경우
//                    move_distance = move_distance.add(move_length); // move_length 만큼 이동
//                    move_cnt = move_cnt.add(BigInteger.ONE); // 이동 횟수 추가
//                    return min_space_move(distance,move_distance,move_length,move_cnt);
//                } else { // +1 만큼 이동해야 할 경우
//                    move_length = move_length.add(BigInteger.ONE);
//                    move_distance = move_distance.add(move_length); // move_length 만큼 이동
//                    move_cnt = move_cnt.add(BigInteger.ONE); // 이동 횟수 추가
//                    return min_space_move(distance,move_distance,move_length,move_cnt);
//                }
//            }
//        }
//    }
//}

/* 재귀 함수 */
//import java.util.Scanner;
//
//public class Main {
//    public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//
//        int T = sc.nextInt();
//        while(T>0) {
//            long x = sc.nextLong();
//            long y = sc.nextLong();
//            long move_cnt = min_space_move(y-x-1,0,0,0);
//            long distance = y-x-1;
//            long move_distance = 0;
//            long move_length = 0;
//            long move_cnt = 0;

//            while(distance > move_distance) {
//                if(move_length-1 < 0) { // 무조건 1 이동
//                    move_distance++; // 1 이동
//                } else {
//                    if(move_distance + move_length > distance) { // -1만큼 이동해야 할 경우
//                        move_length--;
//                        move_distance = move_distance + move_length; // move_length 만큼 이동
//                    } else if(move_distance + (move_length + 1) > distance) { // 이동한 만큼 이동해야 할 경우
//                        move_distance = move_distance + move_length; // move_length 만큼 이동
//                    } else { // +1 만큼 이동해야 할 경우
//                        move_length++;
//                        move_distance += move_length; // move_length 만큼 이동
//                    }
//                }
//                move_cnt++;
//            }

//            System.out.println(move_cnt+1);
//            T--;
//        }
//    }
//    public static long min_space_move(long distance,long move_distance,long move_length,long move_cnt) {
//        if(distance == move_distance) { // 이동을 다 한 경우 이동 횟수 리턴
//            return move_cnt;
//        } else {
//            if(move_length-1 < 0) { // 무조건 1 이동
//                move_distance++; // 1 이동
//                move_cnt++; // 이동 횟수 추가
//                return min_space_move(distance,move_distance,1,move_cnt);
//            } else {
//                if(move_distance + move_length > distance) { // -1만큼 이동해야 할 경우
//                    move_length--;
//                    move_distance = move_distance + move_length; // move_length 만큼 이동
//                    move_cnt++; // 이동 횟수 추가
//                    return min_space_move(distance,move_distance,move_length,move_cnt);
//                } else if(move_distance + (move_length + 1) > distance) { // 이동한 만큼 이동해야 할 경우
//                    move_distance = move_distance + move_length; // move_length 만큼 이동
//                    move_cnt++; // 이동 횟수 추가
//                    return min_space_move(distance,move_distance,move_length,move_cnt);
//                } else { // +1 만큼 이동해야 할 경우
//                    move_length++;
//                    move_distance += move_length; // move_length 만큼 이동
//                    move_cnt++; // 이동 횟수 추가
//                    return min_space_move(distance,move_distance,move_length,move_cnt);
//                }
//            }
//        }
//    }
//}
