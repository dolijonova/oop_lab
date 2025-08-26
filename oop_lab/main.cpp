//
//  main.cpp
//  oop_lab
//
//  Created by Zarnigor Dolijonova on 26/08/25.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    int num;
    int sum=0;
    int r;
    cin>>num;
    while (num>0){
        r=num%10;
        sum+=r;
        num/=10;
    }
    cout<<sum<<endl;
    return 0;
}
