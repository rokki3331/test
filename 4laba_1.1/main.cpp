#include <iostream>

using namespace std;
int find_negative(int* arr,int size )
{
    int temp=0;
             for (int i=0; size!=i; ++i)
                 if (arr[i]<0)
            temp+=arr[i];
            return temp;
}

int main()
{
    int arr [10] {1,2,3,-4,5,-6,7,8,9,-10};
    cout << find_negative(arr,10) << endl;
    return 0;
}
