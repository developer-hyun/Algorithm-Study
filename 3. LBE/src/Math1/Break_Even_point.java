package Math1;
import java.util.Scanner;

public class Break_Even_point {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long static_price = sc.nextInt();
        long dynamic_price = sc.nextInt();
        long price = sc.nextInt();
        long different_price = price - dynamic_price;

        if(different_price <= 0) {
            System.out.println(-1);
        } else {
            long point = (long)(static_price / different_price) + 1;
            System.out.println(point);
        }
    }
}