#include <iostream>

using namespace std;
int find_max(int* arr, int size)
{
int max=arr[0];
int max_ind;
for (int i=1;i<size; ++i )
        if(arr[i]>max)
        {
        max=arr[i];
        max_ind=i;
        return max_ind;
}
}
int main()
{
    int arr[10] {-1,-2,-3,-4,-5,-6,7,-8,-9,-10};
    cout << find_max(arr,10) << endl;
    return 0;
}
