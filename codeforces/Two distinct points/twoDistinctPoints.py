q = int(input())

for i in range(q):
    a,b,c,d = map(int , input().split())
    if(a != c):
        print(a , c)
    else:
        print(a , c+1)

