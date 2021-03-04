import java.util.*;
class Solution {
    public List<String> letterCombinations(String digit) 
    {
        List<String> out=new ArrayList();
        if(digit.length()==0)
        {
            return out;
        }
        
        Map<Character, String> map=new HashMap<>();
        map.put('2',"abc");
        map.put('3',"def");
        map.put('4',"ghi");
        map.put('5',"jkl");
        map.put('6',"mno");
        map.put('7',"pqrs");
        map.put('8',"tuv");
        map.put('9',"wxyz");
        
        
        recursive(out, 0, digit, map, "");
        return out;
        
    }
    
    public void recursive(List<String> out,int curr, String digit, Map<Character, String> map, String str)
    {
        if (curr==digit.length())
        {
            out.add(str);
            return;
        }
        String temp= map.get(digit.charAt(curr));
        for(int i=0;i<temp.length();i++)
        {
            recursive(out,curr+1,digit,map, str+temp.charAt(i));
        }
    }
}