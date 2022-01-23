#include <iostream>
#include <time.h>

using namespace std;



int main()
{

    int N = 512;
    double a[N][N], b[N][N], c[N][N];

    for(int i = 0; i<N; i++){
    	for(int j = 0; j<N; j++){
    		a[i][j] = (double)rand() / RAND_MAX;
    		b[i][j] = (double)rand() / RAND_MAX;
    	}
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)
        {
            c[i][j]=0;
        }
    }

    struct timespec ts;
    char buff[100];

    // Start 
    timespec_get(&ts, TIME_UTC);
    unsigned long long  int start = ts.tv_nsec;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            for(int k = 0; k < N; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // End 
    timespec_get(&ts, TIME_UTC);
    unsigned long long int end = ts.tv_nsec;
    strftime(buff, sizeof buff, "%D %T", gmtime(&ts.tv_sec));
    
    cout << endl << "Answer : " << endl;
    for(int i = 0; i < N; i++){
    	for(int j = 0; j < N; j++){
        cout << " " << c[i][j];
        if(j == N-1)
            cout << endl;
    	}
    }

    cout << "Time Elapsed: " << end - start << " nsec" << endl;

    return 0;
}
