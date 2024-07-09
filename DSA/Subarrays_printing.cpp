#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //BruteForce
            int largest_sum = 0;
            for(int i=0;i<n;i++)
            {
                for(int j=n;j>i;j--)
                {
                    int sum = 0;
                    for(int k=i;k<j;k++)
                    {
                        cout<<arr[k];
                        sum = sum+arr[k];
                    }
                    cout<<" the sum is :"<<sum;
                    largest_sum = max(largest_sum,sum);
                    cout<<endl;
                }
            }
            cout<<largest_sum;
    //Prefix 

            // int largest_sum_prefix = 0;
            // int prefix[n];
            // prefix[0] = arr[0];
            // for(int i=1;i<n;i++){
            //     prefix[i] = prefix[i-1]+arr[i];
            // }
            // for(int i=0;i<n;i++)
            // {
            //     for(int j = i;j<=n;j++)
            //     {
            //         for(int k=i;k<j;k++)
            //         {
                        
            //         }
            //         cout<<endl;
            //     }
            // }
            
            // for(int i=0;i<n;i++){
            //     cout<<prefix[i]<<" ";
            // }
            return 0;
}