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
for(int i = 0;i<n;i++)
{
    for(int j = i+1;j<n;j++)                // 2, 4, 6, 1, 3  
    { 
        if(arr[j]<arr[i])
        {
            int temp_1 = arr[i];
            arr[i] = arr[j];
            arr[j] = temp_1; 
            //cout<<temp<<"l"<<arr[j]<<endl;
        }
        else
        {
            continue;
        }
    }
}


for(int i =0;i<n;i++)
{
    cout<<arr[i];
}
return 0;
}