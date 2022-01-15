package Baekjoon_backtracking;

import java.util.Scanner;

public class Sudoku {
    static int[][] sudoku = new int[9][9];
//    static int[] number = new int[9];
//    static Map<Integer,Integer> map = new HashMap<>();

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for(int i=0;i<9;i++) {
            for (int j = 0; j < 9; j++) {
                sudoku[i][j] = sc.nextInt();
            }
        }
        sudoku_solution_row(0);
        sudoku_solution_col(0);
        for(int i=0;i<9;i++) {
            for (int j = 0; j < 9; j++) {
                System.out.print(sudoku[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println("------------------------------");
        for(int i=0;i<9;i++) {
            for (int j = 0; j < 9; j++) {
                System.out.print(sudoku[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println("------------------------------");
//        for(int i=0;i<9;i++) {
//            sudoku_solution(i,i);
//            sudoku_solution(i+3,i);
//            sudoku_solution(i+6,i);
//            i+=2;
//        }
        sudoku_solution(0,0);
        for(int i=0;i<9;i++) {
            for (int j = 0; j < 9; j++) {
                System.out.print(sudoku[i][j] + " ");
            }
            System.out.println();
        }
    }
    public static void sudoku_solution_row(int start) {
        if(start == 9) return;
        int cnt =0;
        for(int i=0;i<9;i++) {
            if(sudoku[start][i] ==0) {
                cnt++;
            }
        }
        if(cnt == 1) {
            for(int i=1;i<10;i++) {
                int find_blank=0;
                boolean not_blank = false;
                for(int j=0;j<9;j++) {
                    if (sudoku[start][j] == i) {
                        not_blank = true;
                        break;
                    }
                    if(!not_blank && sudoku[start][j] == 0) {
                        find_blank = j;
                    }
                }
                if(!not_blank) {
                    sudoku[start][find_blank] = i;
                }
            }
        }
        sudoku_solution_row(start+1);
    }
    public static void sudoku_solution_col(int start) {
        if(start == 9) return;
        int cnt =0;
        for(int i=0;i<9;i++) {
            if(sudoku[i][start] ==0) {
                cnt++;
            }
        }
        if(cnt == 1) {
            for(int i=1;i<10;i++) {
                int find_blank=0;
                boolean not_blank = false;
                for(int j=0;j<9;j++) {
                    if (sudoku[j][start] == i) {
                        not_blank = true;
                        break;
                    }
                    if(!not_blank && sudoku[j][start] == 0) {
                        find_blank = j;
                    }
                }
                if(!not_blank) {
                    sudoku[find_blank][start] = i;
                }
            }
        }
        sudoku_solution_row(start+1);
    }
    public static void sudoku_solution(int x,int y) {
        if(y > 3) {
            return;
        }
        for(int i=1;i<10;i++) {
            int find_blank = 0;
            boolean not_blank = false;
            for(int j=x;j<x+3;j++) {
                if(sudoku[y][j] == i) {
                    not_blank = true;
                    break;
                }
                if(!not_blank && sudoku[y][j] == 0) {
                    find_blank = j;
                }
            }
            if(!not_blank) {
                sudoku[y][find_blank] = i;
            }
        }
        sudoku_solution(x,y+1);
    }
}
