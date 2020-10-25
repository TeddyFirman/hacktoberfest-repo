for i in range(int(input())):
    m=0
    x,k=map(int,input().split())
    while x%2==0:
        m+=1
        x/=2
    while x%3==0:
        m+=2
        x/=3
    while x%5==0:
        m+=5
        x/=5
    if x!=1:
        m=-1
        print(m)
    
            
