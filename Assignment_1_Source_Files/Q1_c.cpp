#include <iostream>

using namespace std;

unsigned long long int fibo(int n, unsigned long long int value[], int check[])
{
    if(check[n] == 1)
    {
        return value[n];
    }
    else
    {
        unsigned long long int next = fibo(n-1, value, check) + fibo(n-2,value,check);
        check[n] = 1;
        value[n] = next;
        return next;
    }
}

int main()
{
    // Recursion with memo
    int N = 100;
    unsigned long long int value[N];
    int check[100] = {0};
    check[0] = 1; check[1] = 1;
    value[0] = 1, value[1] = 1;
    // Last 7 numbers of this sequence will be greater than the size of 
    // unsigned long long int but that will not affect the time of the
    // program. 
    for(int i = 0; i<N; i++)
        {
            cout << i+1 << " " << fibo(i, value, check) << endl; 
        }
    return 0;
}
