//Binary search

#include<iostream>
using namespace std;
int binary(int arr[],int l,int h,int k)
{
    while(l<=h){

        int mid=(l+h)/2;
        if(arr[mid]==k)
            return mid;
            else if(arr[mid]<k)
                l=mid+1;
            else
                h=mid-1;

    }

    return -1;

}

   int main(){

   int arr[50],n;
   cout<<"Total array element : ";
   cin>>n;
   cout<<"Enter array element : ";
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int k;
   cout<<"target element : ";
   cin>>k;
   int result=binary(arr,0,n,k);
   if(result==-1)
    cout<<"Item not found";
    else
    cout<<"Item found at index "<<result<<endl;
    return 0;


   }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Arry size:";
    cin >> n;
    int value;
    cout<<" Give "<< n <<" Array=";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Which number you Find:";
    cin >> value;
    int lo = 0, hi = n - 1;

    while (lo < hi)
    {
        int mid = lo + hi / 2;
        if (arr[mid] <= value)
        {


            lo = mid;
        }
        else
        {
            hi = mid - 1;
        }

    }

    if (arr[hi] == value)
        cout << hi;
    else
    {
        cout << "not found";
    }
}


