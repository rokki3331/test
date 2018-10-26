#include <iostream>

using namespace std;
int find_even(int* arr, int size)
{
    int temp=1;
    for(int i=0;i<size;i=i+2)
        {
        temp=temp*arr[i];
        }
return temp;
}

int main()
{
    int arr[5] {1,2,3,4,5};
    cout << find_even(arr,5)<< endl;
    return 0;
}
