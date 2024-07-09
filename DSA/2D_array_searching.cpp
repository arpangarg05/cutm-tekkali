#include <iostream>
using namespace std;


int main(){
int n,m;
cin>>n>>m;
int k;
cin>>k;
int arr[n][m];
for(int i=0;i<n;i++)
   {
       for(int j= 0;j<m;j++)
       {
        cin>>arr[i][j];
       }
   }



// for(int i=0;i<n;i++)
//     {for(int j=0;j<m;j++)
//     {  
//        cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//     }

bool flag = false;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(arr[i][j] == k)
        {
            cout<<i+1<<","<<j+1<<endl;
            flag = true;
        }
        else
        {
            continue;
        }
    }
}
if(flag != true)
{
    cout<<"element not found"<<endl;
}
return 0;
}