#include <iostream>

using namespace std;
using UP=bool (*)(int);
bool f(int a)
{
    return a==0;
}
int zero (int* arr, int size, UP p)
{
    for (; size>0; --size)
        if (p(arr[size]))
            return size;
}
int sum(int* first, int* last)
{
    int temp=0;
    for (; first!=last; ++first)
        temp+=(*first);
    return temp;
}

int main()
{
    int arr[7] {1,0,3,2,5,6,7};
    cout << zero(arr,7,f) << endl;
    cout << sum(arr+zero(arr,7,f),arr+7) << endl;
    return 0;
}
