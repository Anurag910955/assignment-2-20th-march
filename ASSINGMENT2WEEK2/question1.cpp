//Write a program to count the minimum number of notes in a given amount using the switch statement.
#include<iostream>
using namespace std;
int main(){
    int amount;
    int n5=0,n10=0,n50=0,n100=0,n500=0,n2000=0;
    cout<<"enter your amount=";
    cin>>amount;
    switch(amount>=2000){
        case 1:
        n2000=amount/2000;
        amount=amount-(n2000*2000);
        break;
    }
    switch(amount>=500){
        case 1:
        n500=amount/500;
        amount=amount-(n500*500);
        break;
    }
    switch(amount>=100){
        case 1:
        n100=amount/100;
        amount=amount-(n100*100);
        break;
    }
    switch(amount>=50){
        case 1:
        n50=amount/50;
        amount=amount-(n50*50);
        break;
    }
    switch(amount>=10){
        case 1:
        n10=amount/10;
        amount=amount-(n10*10);
        break;
    }
    switch(amount>=5){
        case 1:
        n5=amount/5;
        amount=amount-(n5*5);
        break;
    }
    cout<<"2000="<<n2000<<endl;
    cout<<"500="<<n500<<endl;
    cout<<"100="<<n100<<endl;
    cout<<"50="<<n50<<endl;
    cout<<"10="<<n10<<endl;
    cout<<"5="<<n5<<endl;
    return 0;
}
//output
// enter your amount=510
// 2000=0
// 500=1
// 100=0
// 50=0
// 10=1
// 5=0