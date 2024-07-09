
#include <iostream>
using namespace std;

int binary(int arr[],int l,int h,int k)
{
    while (l <=h)
    {
        int mid = (l+h)/2;

        if(arr[mid]==k)
            return mid;

        else if (arr[mid]<k)
            l=mid+1;
        else
            h=mid-1;

    }
    return -1;
}


int main ()
{


    int arr[5],i,o;
    cout<<"Enter total array element :";
    cin>>o;
    if (o>6)
{


        cout<<"Exceed the limit";
        return 0;
        }

    cout << "Enter the Elements :";
    for(i=0; i<o; i++)
        cin>>arr[i];


    int k ;
    cout << "Target element :";
    cin>>k;


    int result= binary(arr,0,o,k);

    if(result==-1){

        cout <<"Not found !";}

    else {
    cout<< "The targeted index is :"<<result<<endl;
}
}














