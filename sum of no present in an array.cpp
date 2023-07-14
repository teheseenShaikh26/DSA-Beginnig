#include <iostream>

using namespace std;
int sum (int temp[], int size)
{
    if(size == 0)
    {
        return 0;
    }
    if(size == 1)
    {
        return temp[0];
    }
    int addition = sum(temp + 1, size - 1);
    cout<<addition<<endl;
    int ans = temp[0] + addition;
    return ans;
}

int main()
{
    int temp[1] = {7};
    
    int size = 1;
    
    int ans = sum(temp, size);
    
    cout<<"Sum of all numbers:"<<ans<<endl;
    
    return 0;
}