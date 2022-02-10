package String;

import java.util.Scanner;

public class Croatia {

    public static void main(java.lang.String[] args) {
        Scanner sc = new Scanner(System.in);
        java.lang.String s = sc.nextLine();

        if(s.contains("c=")) {
            s = s.replace("c=","&");
        }
        if (s.contains("c-")) {
            s = s.replace("c-","&");
        }
        if (s.contains("dz=")) {
            s = s.replace("dz=","&");
        }
        if (s.contains("d-")) {
            s = s.replace("d-","&");
        }
        if (s.contains("lj")) {
            s = s.replace("lj","&");
        }
        if (s.contains("nj")) {
            s = s.replace("nj","&");
        }
        if (s.contains("s=")) {
            s = s.replace("s=","&");
        }
        if (s.contains("z=")) {
            s = s.replace("z=","&");
        }
        System.out.println(s.length());
    }
}
