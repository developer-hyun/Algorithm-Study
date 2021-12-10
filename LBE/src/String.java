import java.util.Scanner;

public class String {
    public static void main(String[] args) {
        char word;

        Scanner sc = new Scanner(System.in);
        // next + 자료형 : 자료형에 맞는 값을 받을 수 있다.
        // nextLine : 한줄을 통째로 받아온다. 개행문자까지 포함임으로 한번 nextLine 실행해야함
        // next : 화이트 스페이스를 기준으로 한 단어를 받아온다.

        // charAt을 통해 char 값을 받는다
        word = sc.next().charAt(0);
        System.out.println((int)word);
    }
}


