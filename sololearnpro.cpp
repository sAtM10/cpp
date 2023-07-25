#include <iostream>
using namespace std;

int main() {
    int ages[5];

    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
    }
    //your code goes here
    int youngest = ages[0];
    for (int a = 0; a <5; ++a)
    {
        if(youngest>ages[a])
        {
            youngest = ages[a];
        }
    }
    
    int prezzo = 50 - 50/100 * youngest;
    cout << prezzo;
    return 0;
}