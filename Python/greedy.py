def Algo_JS(D,J,n):
    D[0] = J[0] = 0
    k = 1
    J[1]= 1
    i = 2 # from 2nd job
    
    for i in range(n):
        r = k
        while D[J[r]]> D[i] & D[J[r]] != r:
            r = r-1
        if D[J[r]] <= D[i] & D[i] > r:
            l = k
            for l in range(l,r+1,-1):
                J[l+1] = J[l]
                J[r+1] = i
                k = k + 1
    return k
    print("Job sequenced: ", J) # [ )

D = [2,2,1,3,3]
J = [1,2,3,4,5]
P = [20,15,10,5,1]
n = 3 # no. of shifts
Algo_JS(D,J,n) 
print(J[0:n])