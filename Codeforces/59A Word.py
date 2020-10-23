a=str(input())
a_lower=sum(map(str.islower,a))
a_upper=sum(map(str.isupper,a))
if a_upper>a_lower:
    print(a.upper())
else:
    print(a.lower())
