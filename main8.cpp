#include <iostream>
#include <cmath>

using namespace std;

int main(){
   int matA [2][2]={4, 8, 2, 10};
   
   cout<<"Matriks A"<<endl;
   for (int i=0;i<2;i++){
       for(int j=0;j<2;j++){
        cout<<matA[i][j]<<" ";
       }
       cout<<endl;
   }
   cout<<"Hasil Perkalian Eksponen 5 Matrik A "<<endl;
   for (int m=0; m<2; m++){
       for (int n=0; n<2; n++){
           cout<< pow(matA[m][n] * matA[m][n], 5) <<" ";
       }
       cout<<endl;
   }
    return 0;
}
