a,b=map(int,input().split())
s=1
if b>=2:
    s+=a*(a-1)>>1 
if b>=3:
    s+=a*(a-1)*(a-2)/3 
if b==4:
    s+=3*a*(a-1)*(a-2)*(a-3)>>3

print(int(s))
