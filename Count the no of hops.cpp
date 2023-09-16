long long countWays(int n)
    {
        
        int mod = 1e9 + 7; 
        
        if(n == 0 || n == 1) 
        {
            return 1;
        }
        if(n == 2)
        {
            return 2;
        }
        
        long num1 = 1; 
        long num2 = 1;
        long num3 = 2;
        
        long long ans = 0;
        for(int i = 3; i <= n; i++)
        {
            ans = (num1 + num2 + num3) % mod;
            num1 = num2;
            num2 = num3;
            num3 = ans;
    
        }
        return ans;
        
    }