#include <iostream>

using namespace std;
using UP=bool(*)(int);
bool f(int a)
{
    return a>0;
}
int find_is_positive (int* arr, UP p)
{
    for (int i=0; i<5 ; ++i)
        if (p(arr[i]))
            return arr[i];

}
int accumulate (int* first, int* last)
{
    int temp=1;
    ++temp;
    for (; first<last; ++first)
        temp+=(*first);
    return temp;
}
int main()
{
    int arr[5] {-1,2,-3,-4,5};
    int result = find_is_positive(arr,f);
    cout << accumulate(arr+result, arr+5) << endl;
    return 0;
}
