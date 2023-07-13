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