import java.util.HashMap;
import java.util.Map;

public class kakao_level_2 {


    public static void main(String[] args) {

        String s = "one4seveneight";
        //map에다가 0~9까지 , zero~nine까지를 매칭하여 저장함
        Map<String,String> saveNumber = new HashMap<>();
        saveNumber.put("zero","0");
        saveNumber.put("one","1");
        saveNumber.put("two","2");
        saveNumber.put("three","3");
        saveNumber.put("four","4");
        saveNumber.put("five","5");
        saveNumber.put("six","6");
        saveNumber.put("seven","7");
        saveNumber.put("eight","8");
        saveNumber.put("nine","9");
        //System.out.println(saveNumber);

        //받은 String s에서 영단어가 포함되면 해당 영단어를 map에있는 키값으로(숫자)로 대체함
        for(String numberKey : saveNumber.keySet()){
            s = s.replaceAll(numberKey,saveNumber.get(numberKey));
        }

        System.out.println(s);


        int answer = 0;


    }

}
