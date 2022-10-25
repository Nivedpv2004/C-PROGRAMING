#include <iostream>
using namespace std;
int main(){
    // first taking the 2 inputs.
    long a[4], in, val, sum = 0;
    for(long & i : a)
        cin>>i;
    cin>>in;
    while(in%10 != 0){
        val = in%10;
        in = in/10;
        sum += a[val-1];
        cout<<val<<' '<<in<<' '<<sum<<endl;
    }
    cout << sum;
}
