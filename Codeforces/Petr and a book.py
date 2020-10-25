n=int(input())
A=[]
x=0
for _ in range(7):
    A.append(int(input()))
    if sum(A)==n:
        break
    else:
        x=x+1
print(x-1)
