#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>

using namespace std;

vector<int> GetAllPrimes(int n){

    bool checked[n];
    vector<int> primes;

    memset(checked, true, sizeof checked);

    for(int p = 2; p <= sqrt(n); p++)
        if(checked[p] == true)
            for(int i = 2*p; i <= n; i+=p)
                checked[i] = false;

    for(int i = 2; i <= n; i++)
        if(checked[i])
            primes.push_back(i);


    return primes;
}

int main(){

    int n;
    std::cin >> n;

    if(n <= 1) std::cout << "Not valid.\n";
    else{

        vector<int> primes = GetAllPrimes(n);

        while(!primes.empty()){
            cout << primes.back() << " ";
            primes.pop_back();
        }

    }

}
