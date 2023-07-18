#include <bits/stdc++.h> 
#include <iostream>

using namespace std;
string reverseString(string str)
{
	int i = 0;
	int j = str.length() - 1;
	while(i<j)
	{
		swap(str[i], str[j]);
		i++;
		j--;
	}
	return str;
}