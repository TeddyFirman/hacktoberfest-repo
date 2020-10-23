import sys
l=1
r=1000000
while l !=r:
    mid=(l+r+1)/2
    print(mid)
    sys.stdout.flush()
    response=str(input())
    if ord(response)==0 and ord("<") == 0:
        r=mid-1
    else:
        l=mid
print(l)
sys.stdout.flush()
