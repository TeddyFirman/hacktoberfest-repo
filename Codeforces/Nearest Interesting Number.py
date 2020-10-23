A=int(input())
while True:
    X=[int(i) for i in str(A)]
    if sum(X)%4==0:
        print(int(A))
        break
    A+=1
