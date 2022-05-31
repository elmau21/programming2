#include<iostream>
using namespace std;
int main()
{
  int matrix1[10][10],matrix2[10][10],row,col;
  cout<<"\nEnter the number of rows: ";
  cin>>row;
  cout<<"\nEnter the number of columns: ";
  cin>>col;
  cout<<"\nEnter elements of matrix: "<<endl;
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
       cin>>matrix1[i][j];
    }
  }
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
       matrix2[j][i]=matrix1[i][j];
    }
  }
  cout<<"Transpose of Matrix: "<<endl;
  for(int i=0;i<col;i++)
  {
    for(int j=0;j<row;j++)
    {
       cout<<matrix2[i][j]<<" ";
       if(j==row-1)
        cout<<endl;
    }
  }
  return 0;
}
