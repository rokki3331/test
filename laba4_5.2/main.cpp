#include <iostream>
using namespace std;
using UP=bool (*) (int);
bool f(int a)
{
    return a>0;
}
int find_positive1(int* arr, int size, UP p)
{
    for(int i=0; i<size;++i)
        {if(p(arr[i]))
        return arr[i];
}
}
int find_positive2(int* arr, int size, UP p)
{
    int i=find_positive1(arr,5,f);
    for(;i<size;++i)
    {if(p(arr[i]))
        return arr[i];
}
}
int accumulate(int* first, int* last)
{
    int temp=0;
    for ( ;first<last ;++first)
    temp+=(*first);
    return temp;
    }


int main()
{
    int arr[5] {1,-2,-4,3,5};
    int result1 = find_positive1(arr,5,f);
    int result2 = find_positive2(arr,5,f);
    cout << result1 << endl;
    cout << result2 << endl;
    cout<< accumulate(arr+result1,arr+result2) << endl;
    return 0;
}
