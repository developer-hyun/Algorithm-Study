package Sort;

import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;
/*
    참고 : https://st-lab.tistory.com/243
    Comparable 과 Comparator [객체를 비교할 수 있도록 만든다]

    1) Comparable - compareTo(T o) : 자기 자신과 매개 변수 객체를 비교
    2) Comparator - compare(T o1,T o2) : 두 매개변수 객체를 비교
*/
public class location_sort_2{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] location = new int[n][2];
        for(int i=0;i<n;i++) {
            location[i][0] = sc.nextInt();
            location[i][1] = sc.nextInt();
        }
        Arrays.sort(location, new Comparator<int[]>() {
            @Override
            public int compare(int[] o, int[] o2) {
//                if(o[1] > o2[1]) return o2[0] - o[0];
//                else if(o[1] < o2[1]) return o[0] - o2[0];
//                else {
//                    if(o[0] < o2[0]) return o[0] - o2[0];
//                    else return o2[0] - o[0];
//                }
                if(o[1] == o2[1]) return o[0] - o2[0];
                else return o[1] - o2[1];
            }
        });
        for(int i=0;i<n;i++) {
            System.out.println(location[i][0] + " " +location[i][1]);
        }
    }
}
//public class Main {
//    public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//        StringBuffer sb = new StringBuffer();
//        int n = sc.nextInt();
//        ArrayList<Integer> x = new ArrayList<Integer>();
//        ArrayList<Integer> y = new ArrayList<Integer>();
//        for(int i=0;i<n;i++) {
//            x.add(sc.nextInt());
//            y.add(sc.nextInt());
//        }
//        while(y.size() > 0) {
//            int y_top = top_index(y);
//            int x_top = y_top;
//            for(int j=0;j<y.size();j++) {
//                if(y.get(y_top) == y.get(j)) {
//                    if(x.get(y_top) > x.get(j)) {
//                        x_top = j;
//                        y_top = j;
//                    } else {
//                        x_top = y_top;
//                    }
//                }
//            }
//            sb.append(x.get(x_top)).append(" ").append(y.get(y_top)).append("\n");
//            x.remove(x_top);
//            y.remove(y_top);
//        }
//        System.out.println(sb);
//    }
//    public static int top_index(ArrayList top) {
//        int min = (int) top.get(0);
//        int index = 0;
//        for(int i=0;i<top.size();i++) {
//            if((int)top.get(i) < min) {
//                min = (int)top.get(i);
//                index = i;
//            }
//        }
//        return index;
//    }
//}

