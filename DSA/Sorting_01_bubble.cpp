#include <iostream>
using namespace std;

/*int bubblesort(int n)
{
    // for(int k=n-2;k<0;k--)
    // {
    //     for(int j=0;j<=k;j++)
    //     {
    //         if(arr[j]>arr[j+1])
    //         {
    //             int temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //         else
    //         {
    //             continue;
    //         }
    //     }
    // }
    return arr[];
}*/

int main()
    {   
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int k=n-1;k>0;k--)
        {   
            for(int j=0;j<k;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                    //cout<<arr[j]<<" "<<arr[j+1]<<endl;
                }
                else
                {   
                    continue;
                }
            }
        }
        
        
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        return 0;
    }