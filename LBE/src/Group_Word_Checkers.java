import java.util.Scanner;

public class Group_Word_Checkers {

    public static void main(java.lang.String[] args) {
        Scanner sc = new Scanner(System.in);
        int cnt = sc.nextInt();
        int word_count = 0;
        for(int i=0 ; i < cnt ; i++) {
            if(i == 0) {
                sc.nextLine();
            }
            java.lang.String str = sc.nextLine();

            if(get_word_count(str)) {
                word_count++;
            }
        }
        System.out.println(word_count);
    }

    public static boolean get_word_count(java.lang.String str) {

        java.lang.String change_word = new java.lang.String();
        change_word += str.charAt(0);
        int j=0;
        for(int i=0; i<str.length();i++) {
            if(str.charAt(i) != change_word.charAt(j)) {
                for(int h=0;h<change_word.length();h++) {
                    if(str.charAt(i) == change_word.charAt(h)) {
                        if(h<j) {
                            return false;
                        }
                    }
                }
                change_word += str.charAt(i);
                j++;
            }
        }
        return true;
    }
}

