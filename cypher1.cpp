#include <iostream>
using namespace std;
int main()
{
      char let;
  do
{
char aa[1100];  //spy1 input 
char b[1000];      
cout<<"enter message"<<endl;
cin.get(aa,1100);     // input of aa

char alp[100]="CxL$jIh:fsb*m-unh&cik!po"; //encryption bank

 for(int i=0;(i<1100 && aa[i] !='\0');i++) //encryption 
{
    b[i]=alp[i];
}
cout<<b<<endl;
cin>>let;
if(let=='n')
{
    cout<<aa<<endl;
}
}
while(let !='n');

}
