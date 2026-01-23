#include <iostream>
#include <iomanip>


using namespace std;

int main(int argc,char *argv[]){
  int *pa, *pb,  temp;
  int n,i;
  cout<<"how many numbers that you need?";
  cin>> n;
  pa = new int[n];
for (i=0;i<n;i++){
  cout<<"input"<<i+1<<": ";
  cin>> pa[i];
}

cout<<"Original: ";
for (i=0; i<n-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
   

  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;

pa -= (n-1);  
pb = pa + n - 1;

for (i=0; i<n/2; i++)
{
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
}
