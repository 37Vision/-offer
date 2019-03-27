class Solution {
public:
    int Sum_Solution(int n) {
        int result = 0;
		//利用&&的特性，如果第一个表达式不成立，则后面的表达式都不执行
        (n>0)&&(result=Sum_Solution(n-1)+n);
        return result;
    }
};