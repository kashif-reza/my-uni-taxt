
#include <iostream>

using namespace std;
 void removeall(int arry[],int elimant,int s){

 { int team;
  team=0;
     for (int j=0;j<s;j++)
    { if (arry[j]!=elimant){
       arry[team] =arry[j];
        team++;}
    }
    for(int i=team;i<s;i++)
    arry[i]=0;
 }
 }
int main()
{
    int roll[]={20,40,50,60,40,90};
    int elimant=40;
    int  s=sizeof(roll)/sizeof(roll[0]);

    removeall(roll,elimant,s);
    for(int i=0;i<s;i++)
   {
    cout << roll[i]<<"  " ;
    }
    cout<<endl;
    return 0;
}

