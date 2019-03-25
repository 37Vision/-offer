import java.util.Arrays;
public class Solution {
    public boolean isContinuous(int [] numbers) {
        if(numbers == null||numbers.length==0)
            return false;
        Arrays.sort(numbers);
        int len = numbers.length;
		//判断有无重复元素
        int t = 0;
        for(int i = 0;i<len;i++)
			t ^= numbers[i];
        if(t == 0)
            return false;
        else if(numbers[len - 1]-numbers[0] == len - 1)
            return true;
		
		//统计0的个数
		int zerocount = 0;
        for(int a : numbers)
            if(a == 0)
                zerocount++;
			
        if(zerocount == 4)
            return true;
        if(numbers[len - 1]-numbers[zerocount] <= len - 1)
            return true;
        else 
            return false;
    }
}