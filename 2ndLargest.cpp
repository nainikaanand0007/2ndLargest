#include<iostream>

using namespace std;

void secondLargest(int arr[], int size)
{
    int i,j,temp;
    
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }


cout<<"\nSorted Array : "<<endl;
for(i=0;i<size;i++)
cout<<arr[i]<<'\t';
 cout<<"\n\nSecond Largest No. in the Array :"<<arr[size-2];
}

int main()
{
    int i,arr[40],size;
    
    cout<<"Enter size of Array : ";
    cin>>size;
    
    for(i=0;i<size;i++)
    {
        cout<<"Enter arr["<<i<<"] : ";
        cin>>arr[i];
    }
    cout<<"\nOriginal Array : "<<endl;
    for(i=0;i<size;i++)
    cout<<arr[i]<<'\t';
    secondLargest(arr,size);
    return 0;
}