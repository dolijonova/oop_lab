//
//  main.cpp
//  problem2
//
//  Created by Zarnigor Dolijonova on 26/08/25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin>> n;
    int arr[n];
    

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int j=0;j<n;j++){
        if (max<arr[j]){
            max=arr[j];
        }    }
    cout<<max<<endl;
    return 0;
}
