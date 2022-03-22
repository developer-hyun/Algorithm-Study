package Math1;

import java.util.Scanner;

public class Find_room_number {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0) {
            int h = sc.nextInt(); //층수
            int w = sc.nextInt(); //방수
            int n = sc.nextInt(); // 몇 번째 고객
            int cnt = 0;

            for(int i=1;i<w+1;i++) {
                for(int j=1;j<h+1;j++) {
                    cnt++;
                    if(cnt == n) {
                        String room = room_number(j,i);
                        System.out.println(room);
                    }
                }
            }
            t--;
        }
    }
    private static String room_number(int j, int i) { //방 번호 return
        if(i<10) {
            return j+"0"+i;
        } else {
            return String.valueOf(j)+String.valueOf(i);
        }
    }
}

