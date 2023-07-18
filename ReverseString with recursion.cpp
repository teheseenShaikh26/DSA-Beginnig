#include <iostream>

using namespace std;

class Solution {
public:

    void reverse(vector<char>& s, int start, int end )
    {
        if(start > end)
        {
            return ;
        }
        swap(s[start], s[end]);
        start++;
        end--;

        reverse(s, start, end);
        
    }


    void reverseString(vector<char>& s)
    {
        reverse(s, 0, s.size() - 1);
        
    }
};