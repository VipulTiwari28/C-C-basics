#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],arr_1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr_1[i];
    }
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr_1[n-(i+1)])
        {
            counter++;
        }
    }
    if(counter==n)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}
