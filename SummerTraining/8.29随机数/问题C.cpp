
#include<bits/stdc++.h>
using namespace std;
#define Max 10000000
double Rand(double l,double r){
    return l+(r-l) *rand()*1.0 /RAND_MAX;
}
double get_cai(){
    srand(time(NULL));
    int num = 0;
    for(int i = 0;i <Max;i++){
        double x = Rand(1.0,2.0);
        double y = Rand(0,1.0);
        if(1/x >= y) num ++;
    }
    return num *1.0 /Max;
}
int main(){

    //for(int i = 0; i < 10; i++)
    printf("%.4f",get_cai());
    return 0;
}
