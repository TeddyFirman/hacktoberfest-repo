a,b,c=map(int,input().split())
if a>b and a>c:
    print("+")
if b>a and b>c:
    print("-")
if c>a and c>b:
    print("?")
elif a==b:
    print("0")
