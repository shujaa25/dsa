class Solution
{
    private final static long _7 = 1000000007;
    long power(int x,int p)
    {
        if(p == 0) return 1;
        if(p == 1) return x;
        
        if (p%2 == 0){
            long temp = power(x, p/2)%_7;
            temp*=temp;
            return temp%_7;
        }
        
        return (x*power(x, p-1))%_7;
    }

}