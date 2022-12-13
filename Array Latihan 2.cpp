#include <iostream>
using namespace std;

int main(){
int B[3][4],C[3][4],A[3][4];
int i, j;
cout<<"Input Matrik A: "<<endl;
for(i=0; i<3; i++)
for(j=0; j<4; j++){

cout<<"Matrik A["<<i<<","<<j<<"] : ";
cin>>A[i][j];

}
cout<<"Input Matrik B: "<<endl;
for(i=0; i<3; i++)
for(j=0; j<4; j++){
cout<<"Matrik B["<<i<<","<<j<<"] : ";
cin>>B[i][j];
}
for(i=0; i<3; i++)
for(j=0; j<4; j++)
C[i][j]=A[i][j]+B[i][j];
cout<<"Matrik A+B: "<<endl;
for(i=0; i<3; i++){
for(j=0; j<4; j++){
cout<< C[i][j]<<" ";
}
cout<<" "<<endl;
}
}
