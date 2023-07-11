#include <iostream>

using namespace std;
//Check array sorted or not

bool checkSorted(int arr[], int size)
{
    
    if(size == 0 || size == 1)//Base Case
    {
        return true ;
    }
    else if(arr[0] > arr[1])
    {
        return false;
    }
    else
    {
         bool ans = checkSorted(arr + 1, size-1);//Recursive Relation
            return ans;
    }
    
}

int main()
{
    int arr[5] = {1,2,6,6,6};
    int size = 5;
    
    bool ans = checkSorted(arr,size);
    if(ans)
    {
        cout<<"Array is sorted"<<endl;
    }
    else
    {
        cout<<"Array is not sorted"<<endl;
    }
    cout<<"Hello World";

    return 0;
}