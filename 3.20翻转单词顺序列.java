public class Solution {
    public String ReverseSentence(String str) {
        String[] w = str.split(" ");
        if(w.length == 0)
            return str;
        StringBuffer buffer = new StringBuffer();
        for(int i = w.length-1;i>=0;i--)
        {
            buffer.append(w[i]+" ");
        }
        String res = buffer.toString();
        return res.trim();
    }
}