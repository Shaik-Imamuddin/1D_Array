n=int(input())

arr=[]
for i in range(n):
    arr.append(int(input()))

res=[0]*n

for i in range(n):
    res[i]=arr[n-i-1]
    print(res[i],end=" ")