#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = true;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = false;
            cout << n << " is not a Composite Number. Its prime factors are: ";
            while (n % i == 0) {
                cout << i << " ";
                n /= i;
            }
            cout << endl;
        }
    }

    if (isPrime) {
        cout << n << " is a prime number." << endl;
        int sum = 0;
        int count = 0;
        for (int i = 2; i <= n; i++) {
            bool isPrime = true;
            for (int j = 2; j <= sqrt(i); j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                sum += i;
                count++;
            }
        }
        double average = (double) sum / count;
        cout << "The average value of prime numbers between 1 and " << n << " is " << average << endl;
    }

    return 0;
}
