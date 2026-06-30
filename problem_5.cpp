
#include <iostream>

using namespace std;
 void removee(int arry[],int p,int s){

 {
     for (int j=p;j<s-1;j++)
    {
        arry[j]=arry[j+1];
    }
    arry[s-1]=0;
 }
 }
int main()
{
    int roll[]={20,40,50,60,80,90};
    int position=4;
    int  s=sizeof(roll)/sizeof(roll[0]);

    removee(roll,position,s);
    for(int i=0;i<s;i++)
   {
    cout << roll[i]<<"  " ;
    }
    cout<<endl;
    return 0;
}

