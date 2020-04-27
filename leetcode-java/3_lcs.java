import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

class LCS {
    public int lengthOfLongestSubstring(String s) {
        if (s.length()==0) return 0;
        HashMap<Character, Integer> map = new HashMap<Character, Integer>();
        int max = 0;
        int left = 0;
        for(int i = 0; i < s.length(); i ++){
            if(map.containsKey(s.charAt(i))){
                left = Math.max(left,map.get(s.charAt(i)) + 1);
            }
            map.put(s.charAt(i),i);
            showMap(map);
            max = Math.max(max,i-left+1);
            System.out.println("\n");
        }

        return max;
    }
    public void showMap(HashMap map){
        Iterator iter = map.entrySet().iterator();
        while (iter.hasNext()) {
            Map.Entry entry = (Map.Entry) iter.next();
            Object key = entry.getKey();
            Object value = entry.getValue();
            System.out.println(key + ":" + value);

        }
    }

    public static void main(String[] args) {
        LCS obj = new LCS();
        obj.lengthOfLongestSubstring("abcabcbb");
    }
}