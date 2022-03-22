package Math1;

import java.util.Scanner;
import java.math.BigInteger;

public class More_big_number {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // long 범위 ~ 9,223,372,036,854,775,808
        // 더 큰 값이 필요
        BigInteger number1 = new BigInteger(sc.next());
        BigInteger number2 = new BigInteger(sc.next());

        System.out.println(number1.add(number2));
    }
}

