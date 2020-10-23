A=int(input())
X=[]
for i in range(A):
    for j in i:
        if (i**2)+2*i*j+i+1 == A:
            X.append(i)
            X.append(j)
        else:
            continue
if int(len(X))>2:
    print("NO")
else:
    print(*A)
