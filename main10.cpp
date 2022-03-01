#include <iostream>

using namespace std;

int main()
{
   int matA [2][2]={4,8,2,10};
   
   cout<<"Matriks A"<<endl;
   for (int i=0;i<2;i++){
       for(int j=0;j<2;j++){
        cout<<matA[i][j]<<" ";
       }
       cout<<endl;
   }
   cout<<endl;
  cout<<"Transpose Matriks A \n";
  for (int i=0;i<2;i++){
       for (int j=0;j<2;j++){
    
           cout<<matA[j][i]<<" ";
       }
       cout<<endl;
   }
   
    return 0;
}
