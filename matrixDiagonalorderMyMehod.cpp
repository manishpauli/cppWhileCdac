#include <iostream>
#include <vector>
#define n 5
#define m 4
using namespace std;

void diagonal(int mat[n][m])
{
   for (int i = 0 ; i<=(n+m-2);i++)
   {
    if(i < n)
    { 
      for(int j = i, c = 0 ; j>=0 && c<m ; j--,c++)
      { 
        cout<<mat[j][c]<<", ";
      }
      cout<<endl;
    }
    else{
    int r = (n-1), c = i-(n-1); 
    for(int j = i ; j< 8; j++,c++,r--)
    { 
      cout<<mat[r][c]<<", ";
    }
    
    cout<<endl;
   }
   }
}
int main()
{
  int M[n][m] = {       { 1, 2, 3, 4 }, 
                        { 5, 6, 7, 8 }, 
                        { 9, 10, 11, 12 }, 
                        { 13, 14, 15, 16 }, 
                        { 17, 18, 19, 20 },
                }; 
    cout << "\nDiagonal printing of matrix is " << endl; 
    diagonal(M); 
     
}
