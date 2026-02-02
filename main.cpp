#include <iostream>
#include <iomanip>

#include <cstdlib>

using namespace std;

int main(int argc,char *argv[]){
  int *pa, *pb,  temp;
  int n,i;
  
  n = argc -1;
  pa = new int[n];
  int *base = pa;
//for (i=0;i<n;i++){
 // cout<<"input"<<i+1<<": ";
 // cin>> pa[i];
for (i = 0; i < n; i++) {
        pa[i] = atoi(argv[i + 1]);
    }

cout<<"Original: ";
for (i=0; i<n; i++ ){
   cout<<setw(3)<<base[i] ;//<<endl;
   

  
}
cout<<endl;
//cout<<setw(3)<<*pa<<endl;

//pa -= (n-1);  
//pb = pa + n - 1;

//for (i=0; i<n/2; i++)
/*{
   temp = *pa;  
   *pa = *pb;  
   *pb = temp;
   pa++;  pb--;
}
pa-=n;
pb-=n/2;
cout<<"Reversed: ";
for (i=0; i<n-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;
delete [] pa;

return 0;
}*/
pa = base + n - 1;  
pb = base; 
cout<<"Reversed: ";
pb=pa-n+1;
for (i=0;i<n/2;i++){
  temp= *pa;
  *pa= *pb;
  *pb=temp;
  pa--;
  pb++;

}
for (i=0; i<n; i++ ){
   cout<<setw(3)<<base[i] ;
}
delete [] base;
}