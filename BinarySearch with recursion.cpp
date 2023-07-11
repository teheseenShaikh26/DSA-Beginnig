#include <iostream>

using namespace std;
void print(int array[], int size)
{
    cout<<"Size of array: "<<size<<endl;
    
    for(int i = 0; i < size; i++)
    {
        cout<<array[i]<<" "<<endl;
        
    }
    cout<<endl;
}

bool checkKeyelement(int array[], int size, int k)
{
    print(array,size);
    if(size == 0) //Base Case
    {
        return false;
    }
    
    if(array[0] == k)
    {
        return true;
    }    
    else
    {
        bool ans = checkKeyelement(array + 1, size-1,k);//Recursive Relation
        return ans;
    }    
}

int main()
{
    int k ;
    cin>>k;
    
    int array[5] = {1,2,3,4,5};
    int size = 5;
    
    bool ans = checkKeyelement(array,size,k);
    
    if(ans)
    {
        cout<<"element matched: "<<k<<endl;
    }
    else
    {
        cout<<"element not present: "<<k<<endl;
    }
    
}

void print(int array[], int start, int end)
{
    //cout<<"Size of array:"<<start<<endl;
    
    for(int i = start; i <= end; i++)
    {
        cout<<array[i]<<endl;
    }
    cout<<endl;
}

bool binarySearch(int array[],int start, int end, int k)
{
    print(array,start,end);
    
    if(start > end)
    {
        return false;
    }
    int mid = start + (end - start) / 2;
    
    if(array[mid] == k)
    {
        return true;
    }
    cout<<"Mid element of array: "<<array[mid]<<endl;
    
    if(array[mid] < k)
    {
        return binarySearch(array, mid + 1, end, k);
    }
    
    else
    {
        return binarySearch(array, start, mid - 1, k);
    }
}

int main()
{
    int size = 6;
    
    int k = 14;
    
    int array[6] = {2,4,6,10,12,14};
    
    bool ans = binarySearch(array,0,size - 1,k);
    
    cout<<"Present or not:"<<ans<<endl;
    
    return 0;
}