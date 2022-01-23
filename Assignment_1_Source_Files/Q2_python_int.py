import random
import timeit


N = 512
A = [[0]*N]*N
for i in range(N):
    for j in range(N):
        A[i][j] = random.randint(1,100)

B = [[0]*N]*N
for m in range(N):
    for n in range(N):
        B[m][n] = random.randint(1,100)

C = [[0]*N]*N

start = timeit.default_timer()
for p in range(N):
    for q in range(N):
        for r in range(N):
            C[p][q] = A[p][r]*B[r][q]
stop = timeit.default_timer()
    
for s in range(N):
    print()
    for t in range(N):
        print(C[s][t] , end = " ")
print()
print('Time: ', stop - start)  


