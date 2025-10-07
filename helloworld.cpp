#include<iostream>

using namespace std;

int main(){
    string name = "zoro";
    int num = 1;
    float point_num = 1.1;
    double point_Bignum = 4143124.1432;

    cout << "I love Programming"<<endl;
    cout << "I love Programming"<<endl;
    cout << "Enter Your Name Please :";
    // cin>>name;
    // cout<<"access denied for "<<name;
    cout<<"\n size of int :"<<sizeof(int);
    cout<<"\n size of bool :"<<sizeof(bool);
    cout<<"\n size of char :"<<sizeof(char);
    cout<<"\n size of string :"<<sizeof(string);
    cout<<"\n size of float :"<<sizeof(float);
    cout<<"\n size of double :"<<sizeof(double);
    cout<<"\n size of long :"<<sizeof(long);
    cout<<"\n size of long long :"<<sizeof(long long);
    return 0;
}