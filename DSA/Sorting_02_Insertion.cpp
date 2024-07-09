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

for(int i=0;i<n;i++)
   {
      int temp = arr[i+1];
      for(int j=i;j>0;j--)
      {
         if(temp < arr[j])
         {
            arr[j+1] = arr[j];
         }
         else
         {
            arr[j] = temp;
         }
      }
   }

for(int i=0;i<n;i++)
   {
     cout<<arr[i];
   }


return 0;
}