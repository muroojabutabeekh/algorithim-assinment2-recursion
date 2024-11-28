// algorithim-assinment2-recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
#include <chrono> 
using namespace std;


long long factorial(long long n) {
    if (n==1 || n==0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {

    auto start = chrono::high_resolution_clock::now();

    long long number;
    cout << "enter the number to calculate the factorial to it : ";
    cin >> number;
    long long fact = factorial(number);
    auto end = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start).count();

    cout << "Factorial of " << number << " is: " << fact << endl;
    cout << "Execution time: " << duration << " ms" << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
