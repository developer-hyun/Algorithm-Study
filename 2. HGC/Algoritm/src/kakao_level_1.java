import java.beans.Expression;
import java.util.*;
class kakao_level_1 {



    public static void main(String[] args) throws Exception {

//        HashMap<String, HashSet<String>> setTest = new HashMap<>();
//        setTest.put("muzi",new HashSet<String>());
//        setTest.get("muzi").add("prodo");
//        setTest.get("muzi").add("pr1");
//        setTest.get("muzi").add("prodo");
//
//        setTest.put("prodo",new HashSet<>());
//        setTest.get("prodo").add("muzi");
//        System.out.println(setTest);
//
    }

    public static int[] solution(String[] id_list, String[] report, int k) throws Exception{

        HashMap<String, HashSet<String>> reportHashMap = new HashMap<>(); //누가 누구를 신고했는지를 hashmap형태로받음
        HashMap<String,Integer> resultCount = new HashMap<>(); //유저별로 처리결과 받는 횟수에 관한 HasmMap

        for (int j=0; j< id_list.length; j++) {
            resultCount.put(id_list[j],0);  //입력받은 유저 아이디와 신고 횟수를 저장
            reportHashMap.put(id_list[j],new HashSet<>()); //신고 HashMap에 유저 아이디를 저장
        }

        for(int m=0; m< report.length;m++) {
            String[] splitReport = report[m].split(" "); //report는 "이름 이름" 형태여서 스페이스바로 자르고
            //reportHashMap을 <신고받은사람  , 신고한사람> 의 형태로 만들려고함
            reportHashMap.get(splitReport[1]).add(splitReport[0]);

        }

        for (String key : reportHashMap.keySet()) { //reportHashMap에서 신고받은 사람값을 가져옴
            HashSet<String> suePeoples = reportHashMap.get(key); //신고받은사람key값을 넣어서 신고한사람의 HashSet목록을 가져옴
            if(suePeoples.size()>=k) { //신고한사람이 주어진 k값보다 크면 메일을 받아야함
                for(String suePeople : suePeoples) {  //신고한 사람을 하나씩 가져와서
                    Integer mailCount = resultCount.get(suePeople); // 신고한 사람의 메일 처리 결과(int)를 가져옴
                    resultCount.put(suePeople,mailCount+1); //여기까지 온거면 메일이 발송된거기 때문에 count+1해줘서 갱신함
                }
            }


        }

        //resulCount에 메일발송 횟수가 저장되어있기 때문에 answer로 복사해서 출력함!
        int[] answer =new int[id_list.length];
        for (int l=0; l< answer.length;l++){
            answer[l] = resultCount.get(id_list[l]);
        }
        return answer;

    }

}

