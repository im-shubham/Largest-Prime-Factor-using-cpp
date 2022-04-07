#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long int n){
    for(long long int i=2;i*i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;
    cin >> t;

    while (t--) {
        long long int n;
        cin >> n;

        vector<long long int> fac;
        vector<long long int> facNum;

        for (long long int i = 2; i <=n; i++) {
            if (n % i == 0) {
                fac.push_back(i);


            }
        }
        for (long long int i = 0; i < fac.size(); i++) {
            if(isPrime(fac[i])){
                facNum.push_back(fac[i]);
            }

        }

        for (long long int i = 0; i < facNum.size(); i++) {
            cout << facNum[i] << " ";

        }
        cout << endl;




    }



    return 0;
}


