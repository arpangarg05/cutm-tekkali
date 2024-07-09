#include <iostream>
using namespace std;


int main(){
int n,m,inp;
cin>>n>>m>>inp;
cout<<endl;
int arr[n][m];      //n = rows *_* m = columns
for(int i=0;i<n;i++)
   {
    for(int j = 0;j<m ;j++)
    {
        cin>>arr[i][j];
    } 
}

//searching
/*  1  2   3   4
    5  6   7   8
    9  10  11  12 */


for(int i=0;i<n;i++)
    {
       for(int j=0;j<m;j++)
       {
        cout<<arr[i][j]<<" ";
       }
       cout<<endl;
    }
int index_col = 0;
int index_row = 0;
int corner;
do
    {
        corner = arr[0+index_row][m-1-index_col];
        if(corner < inp)
        {
            index_row++;
            cout<<(0+index_row)<<"row"<<endl;
        }
        else if(corner > inp)
        {
            index_col++;
            cout<<(m-1-index_col)<<"col"<<endl;
        }
        else
        {
            cout<<(0+index_row+1)<<","<<(m-index_col)<<endl;
        }
    }while(corner != inp);

return 0;
}