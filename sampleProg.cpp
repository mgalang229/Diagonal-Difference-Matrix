#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n, sum = 0, sum2 = 0, counter = 0, arr[100][100];

    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                sum += arr[i][j];
            }
        }
    }
    
    counter = n - 1;
    for(int i = 0; i < n; i++){
        sum2 += arr[i][counter];
        counter--;
    }

    cout << abs(sum - sum2);

    return 0;
}
