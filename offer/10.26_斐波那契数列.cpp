class Solution {
public:
    int Fibonacci(int n) {
        if(n==0) return 0;
        if(n==1||n==2) return 1;
        int last=1,result=1,newresult;//0 1 1 2 3 5 8
        for(int i=3;i<=n;i++){
            newresult=result+last;
            last=result;
            result=newresult;
        }
        return result;
    }
};
