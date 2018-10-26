#include <iostream>
#include <cmath>

using namespace std;
int find_max_abs(int* arr, int size)
{
    int max=arr[0];
    int max_ind_abs;
    for(int i=1; i<size;++i)

    if(abs(arr[i])>max)
    {
    max=abs(arr[i]);
    max_ind_abs=i;

}
return max_ind_abs;
}
int main()
{
    int arr[7] {1,2,3,4,5,6,-7};
    cout << find_max_abs(arr,7) << endl;
    return 0;
}
