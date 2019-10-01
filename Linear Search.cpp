#include<iostream>
using namespace std;
int main()
{
    int a[100],n,x,flag=0;
    cout<<"Enter the number of elements to be entered:"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be searched:"<<endl;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            cout<<"Element found at index "<<i+1;
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"Element not found.";
        return 0;
}
