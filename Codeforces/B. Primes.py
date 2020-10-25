def isprime(num):
    if num > 1:
       for i in range(2,num):
           if (num % i) == 0:
               return False
               break
       else:
           return True
           
    else:
        return False
a=int(input())
for i in range(a):
    for j in range(a):
        if isprime(i) and isprime(j):
                            if i+j==a:
                    print(i,j)
                break
