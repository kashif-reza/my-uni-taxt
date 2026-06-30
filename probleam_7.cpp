
#include <iostream>

using namespace std;
 bool samerepitation(int arry[],int s){
     int arry1[100]={0};

 {
     for (int j=0;j<s;j++){
        int k=arry[j];
        arry1[k]=arry1[k]+1;
        }
        for (int i=0;i<100;i++){
             if (arry1[i]>1)
          for (int j=i+1;j<100;j++){
                    if(arry1[j]>1&&arry1[i]==arry1[j]){
                        return true;
                    }
    }
          }

     }
 return false;
 }
int main()

{

    int roll[]={20,40,50,60,40,90,90};
    int  s=sizeof(roll)/sizeof(roll[0]);



  if(samerepitation(roll,s))
    cout<<"true";
  else
    cout<<"false";


    return 0;}



