def isp(num):
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
if (isp(a - 2)):print(2,a - 2);
else:print(-1)
