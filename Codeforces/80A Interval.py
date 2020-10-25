a,b=map(int,input().split())
Z=[a,b]
A=[]
for num in range(a,b+1):
   if num > 1:
       for i in range(2,num):
           if (num % i) == 0:
               break
       else:
           A.append(num)
if Z==A:
    print("YES")
else:
    print("NO")
