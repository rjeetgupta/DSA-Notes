#include <iostream>
using namespace std;

void sieveOfEratosthenes(int num) {
    int prime[num + 1];
    // All are marked as 1
    for (int i = 2; i <= num; i++) {
        prime[i] = 1;
    }

    for (int i = 2; i <= num; i++) {
        if(prime[i] == 1) {
            for (int j = i * i; j <= num; j+=i) {
                prime[j] = 0;
            }
        }
    }

    for (int i = 2; i <= num; i++) {
        if(prime[i] == 1){
            cout << i << " ";
        }
    }
}


// Optimized 

// timecomplexity ~ O(N) + O(Nlog(logN)) + O(N) i.e Prime Harmonic Series and spaceComplexity = O(N)
void sieveOfEratosthenes(int num) {
    int prime[num + 1];
    // All are marked as 1
    for (int i = 2; i <= num; i++) {
        prime[i] = 1;
    }

    // O(log(logN))
    for (int i = 2; i * i <= num; i++) {
        if(prime[i] == 1) {
            for (int j = i * i; j <= num; j+=i) {
                prime[j] = 0;
            }
        }
    }

    for (int i = 2; i <= num; i++) {
        if(prime[i] == 1){
            cout << i << " ";
        }
    }
}

int main() {

    int number;
    cout << "Enter a number : ";
    cin >> number;

    cout << "All the prime number till " << number << " : "<< endl;

    sieveOfEratosthenes(number);

    return 0;
}