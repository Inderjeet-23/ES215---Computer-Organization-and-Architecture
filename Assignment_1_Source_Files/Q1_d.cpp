#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Loop with memo
    // Loop with memoization does not make a lot of sense so I kept saving 
    // each element in a data str like we do in memoization.
    int N = 100;
    vector<unsigned long long int> value;

    value.push_back(1);
    value.push_back(1);
	
    cout<< 1 << " " << value[0] << endl;
    cout<< 2 << " " << value[1] << endl;
    // Last 7 numbers of this sequence will be greater than the size of 
    // unsigned long long int but that will not affect the time of the
    // program. 
    for(int i = 2; i<N; i++){
		value.push_back(value[i-1]+value[i-2]);
		cout << i+1 << " " << value[i] << endl;
    }
    return 0;
}
