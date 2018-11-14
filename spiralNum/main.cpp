#include <iostream>
#include <QCoreApplication>
#include<vector>
using namespace std;
int main()
{
   uint n=10;
   vector<uint> v(n*n+1);
   uint w[n+1][n+1];
   //
   cout <<"affichage"<<endl;
   //for(uint i=1;i<=n*n;i++){v[i]=i;cout <<v[i]<<"  ";}
   cout <<endl<< endl<<"Traitement !!"<<endl<<endl;
   //
   uint xmin=1,xmax=n,ymin=1,ymax=n;
   uint f=1;
   for(uint k=1;k<=2*n-1;k++){ // nombre de parcours =2*n-1
       //cout << k%4 <<endl;
       if(k%4==1){
           //cout << "direction 1"<<endl;
           for(uint i=xmin;i<=xmax;i++)w[ymin][i]=f++;
           ymin++;
       }
       else if(k%4==2){
           //cout << "direction 2"<<endl;
           for(uint i=ymin;i<=ymax;i++)w[i][xmax]=f++;
           xmax--;
       }
       else if(k%4==3){
           //cout << "direction 3"<<endl;
           for(uint i=xmax;i>=xmin;i--)w[ymax][i]=f++;
           ymax--;
       }
       else if(k%4==0){
           //cout << "direction 4"<<endl;
           for(uint i=ymax;i>=ymin;i--)w[i][xmin]=f++;
           xmin++;
       }
        //cout << "iter "<<endl;
   }
   for(uint i=1;i<=n;i++){
       for(uint j=1;j<=n;j++)cout<< "\t" << w[i][j];
       cout<<endl;
   }
   cout<<endl;
   return 0;

}
