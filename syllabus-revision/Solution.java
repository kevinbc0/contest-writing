import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        
        ArrayList<ArrayList<String>> syllabus = new ArrayList<>();
        HashMap<String, Integer> map = new HashMap<>();
        for (int i = 0; i < n; i++) {
            ArrayList<String> week = new ArrayList<>();

            int a = in.nextInt();
            for (int j = 0; j < a; j++) {
                String name = in.next();
                week.add(name);

                if (map.containsKey(name)) {
                    if (i - map.get(name) >= 3) {
                        map.put(name, -1);
                        continue;
                    }
                }

                map.put(name, i);
            }

            syllabus.add(week);
        }

        for (ArrayList<String> week : syllabus) {
            StringBuilder buf = new StringBuilder();
            for (String name : week) {
                buf.append(map.get(name) == -1 ? "" : name + " ");
            }

            if (buf.length() > 0) {
                buf.deleteCharAt(buf.length() - 1);
                System.out.println(buf);
            } else {
                System.out.println("None");
            }
        }
    }
}
