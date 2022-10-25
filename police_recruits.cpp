#include <iostream>

using namespace std;

int main() {

    int a;
    cin>>a;
    if(a == 0){
        exit(1);
    }
    else{
        int arr[a];
        for(int i =0; i<a; i++){
            cin>> arr[i];
        }
        // checking for crimes and recruit status.
        int rec = 0, crime = 0, incident = 0;
        for(int i =0; i<a; i++){
            if(arr[i] > 0)
                rec += arr[i];
            if(arr[i] == -1)
                crime += arr[i]*-1;
            if(crime == rec) {
                crime = 0;
                rec = 0;
            }
            if(crime > rec) {
                incident++;
                crime = 0;
                if(rec > 0){
                    rec--;
                }
            }
        }
        cout << incident;
    }
}
