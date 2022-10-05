class Solution {
    public int romanToInt(String s) {
        Map<Character, Integer> romanNo = new HashMap<>();
        romanNo.put('I', 1);
        romanNo.put('V', 5);
        romanNo.put('X', 10);
        romanNo.put('L', 50);
        romanNo.put('C', 100);
        romanNo.put('D', 500);
        romanNo.put('M', 1000);
        
        int n = s.length();
        int num = romanNo.get(s.charAt(n - 1));
        
        for (int i = n - 2; i >= 0; i--) {
            if (romanNo.get(s.charAt(i)) >= romanNo.get(s.charAt(i + 1))) {
                num += romanNo.get(s.charAt(i));
            } else {
                num -= romanNo.get(s.charAt(i));
            }
        }
        return num;
    }
    
   
}