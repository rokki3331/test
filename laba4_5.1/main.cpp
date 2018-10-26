#include <iostream>
using namespace std;

int find_max_abs (int* arr, int size)
{
    int max=arr[0];
    for (int i=1; i<size; ++i)
        if (abs(arr[i])>max)
            max=arr[i];
            return max;
        }

int main()
{
    int arr[10] {1,2,5,7,3,5,7,-78,3,10};
    int result = find_max_abs (arr,10);
                 cout << result << endl;
    return 0;
}
