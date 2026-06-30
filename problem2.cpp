#include <iostream>

using namespace std;
 void rightshift(int arry[],int k,int s){
 for (int i=0;i<k;i++)
 {
     for (int j=s-1;j>0;j--)
    {
        arry[j]=arry[j-1];
    }
    arry[0]=0;
 }
 }
int main()
{
    int roll[]={20,40,50,60,80,90};
    int position=4;
    int  s=sizeof(roll)/sizeof(roll[0]);

    rightshift(roll,position,s);
    for(int i=0;i<s;i++)
   {
    cout << roll[i]<<"  " ;
    }
    cout<<endl;
    return 0;
}
