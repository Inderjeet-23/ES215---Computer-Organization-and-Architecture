#include <iostream>

using namespace std;

unsigned long long int fibo(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return fibo(n-1) + fibo(n-2);
    }
}

int main()
{
    //Reccursion
	
    // Last 7 numbers of this sequence will be greater than the size of 
    // unsigned long long int but that will not affect the time of the
    // program. 
    for(int i = 0; i<100; i++)
        {
            cout << i+1 << " " << fibo(i) << endl;
        }
    return 0;
}
