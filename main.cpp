#include<iostream>
#include<math.h>
using namespace std;
int fact(int rmnt){
    cout<<"fact"<<endl;
    int mid_val=1, i=1;
    while(i<rmnt){
        cout<<"fact Loop - "<<i<<endl;
        mid_val=i*mid_val;
        i++;
    }
    return mid_val;
}
int main(){
    int x, n, i=1, flag=1;
    float sum=0;
    cout<<"Enter the value of x : "<<endl;
    cin>>x;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    while(flag<=n){
        if(flag%2==0){
            cout<<"if"<<endl;
            sum=sum-(pow(x,i)/fact(i));
        }
        else{
            cout<<"else"<<endl;
            sum=sum+(pow(x,i)/fact(i));
        }
        i+=2;
        flag++;
    }
    cout<<sum;
}
