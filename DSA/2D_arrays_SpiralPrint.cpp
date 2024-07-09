#include <iostream>
using namespace std;

int main(){
int m,n;
cin>>n>>m;
int arr[n][m];
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>arr[i][j];
    }
}

//Spiral code

int start_col,end_col,start_row,end_row;
start_col = 0;
end_col = n-1;
start_row = 0;
end_row  = m-1;

while(start_col<=end_col && start_row<=end_row)
    {
        //start row
        for(int col = start_col;col<=end_col;col++)
        {
            cout<<arr[start_row][col];
        }
        start_row++;
        //cout<<endl;
        //end col
        for(int row = start_row;row<=end_row;row++)
        {
            cout<<arr[row][end_col];
        }
        end_col--;
        //end row
        for(int col = end_col;col>=start_col;col--)
        {
            cout<<arr[end_row][col];
        }
        end_row--;
        //start col
        for(int row = end_row;row>=start_row;row--)
        {
            cout<<arr[row][start_col];
        }
        start_col++;
    //break;
    }
cout<<endl;

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}