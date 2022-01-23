#include <iostream>

using namespace std;

int main()
{
    // Using Loop
    unsigned long long int a = 1;
    unsigned long long int b = 1;
    // Last 7 numbers of this sequence will be greater than the size of 
    // unsigned long long int but that will not affect the time of the
    // program. 
    for(int i = 0; i<100; i++)
        {
            if(i == 0 || i == 1)
            {
                cout << 1 << " ";
            }
            else
            {
                unsigned long long int temp = b;
                cout << i+1 << " " << a + b << endl;
                b = a + b;
                a = temp;
            }
        }
    return 0;
}
