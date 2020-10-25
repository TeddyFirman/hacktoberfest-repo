a,b=map(int,input().split())
A=[]
B=[]
for _ in range(1,a+1):
    if _%2==0:
        B.append(_)
    else:
        A.append(_)
Z=A+B
print(Z[b-1])
