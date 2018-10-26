#include <iostream>

using namespace std;
using BP=bool (*) (int,int);
bool min(int a, int b)
{
return a<b;
}
bool max(int a,int b)
{
return a>b;
}
int find_min(int* arr,int size, BP p)
{
int min_el=arr[0];
for (int i=1;i<size; ++i )
{
if(p(arr[i],min_el))
{ min_el=arr[i];

return min_el;

}
}
}

int find_max(int* arr, int size, BP p)
{
int max_el=arr[0];
for (int i=1;i<size; ++i )
{
if(p(arr[i],max_el))
max_el=arr[i];

return max_el;
}
}
int main()
{

int arr[10] {10,-7,2,-2,3,-4,-5,9,8,2};


cout« find_min(arr, 10, min) « endl;
cout« find_max(arr, 10, max) « endl;
return 0;
}
