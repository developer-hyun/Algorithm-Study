package com.company;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

/*
    Map : key,value 존재 (key 는 고유한 값)
    hashmap : map 안에서 key/value에 따른 순서 없음
    treemap : key값에 따라 오름 차순 정렬 (정렬 때문에 대량의 데이터 삽입/삭제 시 오래걸림)
    linkedhashmap : 삽입 순서에 따라 정렬
    hashtable: key/value에 null를 넣을 수 없음
 */
public class Main{
    public static void main(String[] args) throws IOException  {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuffer sb = new StringBuffer();
        int n = Integer.parseInt(br.readLine());
        int[] arr_num = new int[n];
        HashMap<Integer,Integer> map = new HashMap<Integer,Integer>();
        StringTokenizer st = new StringTokenizer(br.readLine());
        for(int i=0;i<n;i++) {
            int num = Integer.parseInt(st.nextToken());
            arr_num[i] = num;
        }
        int[] clone = arr_num.clone();
        Arrays.sort(arr_num);
        int rank = 0;
        for(int i=0;i<n;i++) {
            if(!map.containsKey(arr_num[i])) {
                map.put(arr_num[i],rank++);
            }
        }
        for(int i=0;i<n;i++) {
            sb.append(map.get(clone[i]) + " ");
        }
        System.out.println(sb);
    }
}

//public class Main{
//    public static void main(String[] args) throws IOException  {
//        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//        StringBuffer sb = new StringBuffer();
//        int n = Integer.parseInt(br.readLine());
//        HashMap<Integer,Integer> map = new HashMap<Integer,Integer>();
//        Set<Integer> set = new HashSet<Integer>();
//        StringTokenizer st = new StringTokenizer(br.readLine());
//        for(int i=0;i<n;i++) {
//            int num = Integer.parseInt(st.nextToken());
//            map.put(i,num);
//            set.add(num);
//        }
//        for(Map.Entry<Integer,Integer> entry : map.entrySet()) {
//            int cnt = 0;
//            Iterator<Integer> it = set.iterator();
//            while (it.hasNext()) { // hasNext() : 데이터가 있으면 true 없으면 false
//                if(it.next() < entry.getValue()) {
//                    cnt++;
//                }
//            }
//            map.put(entry.getKey(),cnt);
//        }
//        for(Map.Entry<Integer,Integer> entry : map.entrySet()) {
//            sb.append(entry.getValue()+" ");
//        }
//        System.out.println(sb);
//    }
//}

