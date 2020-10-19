#include<iostream>
using namespace std;

int main()
{
    int arr[100],max,min,n;
    int l=0,m=0,h,temp;
    cout<<"Enter the size of arry :"<<endl;
    cin>>n;
    cout<<"Enter the element of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    h=n-1;
    while(m<h)
    {
        if(arr[m]==0)
        {
            // swap(arr[l],arr[m]);
            temp=arr[l];
            arr[l]=arr[m];
            arr[m]=temp;
            l++;
            m++;
        }
        if(arr[m]==1)
        {
            m++;
        }
        if(arr[m]==2)
        {
            // swap(arr[m],arr[h]);
            temp=arr[m];
            arr[m]=arr[h];
            arr[h]=temp;
            h--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    return 0;
}
