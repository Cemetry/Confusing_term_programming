#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,37,40,5,7};
    int i = 3;
    arr[i]++;
    cout<<i<<" "<<arr[i]<<endl;
    arr[i++];
    cout<<i<<" "<<arr[i]<<endl;
    return 0;
}
3 41
4 5
/*
In this example i = 3 so,arr[3]=40 and then it increase the value 40 to 41.So arr[i]++ increments the value of this particular index
and a[i++] first increment the index and then gives the values of this index.
*/

