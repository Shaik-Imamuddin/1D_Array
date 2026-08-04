n= int(input())
arr=[]

for i in range(n):
    arr.append(int(input()))

visited=[]

for i in range(n+1):
    visited.append(0)

for i in range(n):
    if arr[i]>=1 and arr[i]<=n:
        visited[arr[i]]=1

for i in range(1,n+1):
    if visited[i]==0:
        print(i)
        break
else:
    print(n+1)