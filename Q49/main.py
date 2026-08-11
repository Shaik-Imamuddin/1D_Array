n = int(input())

arr=[]

for i in range(n):
    arr.append(int(input()))

max=arr[0]
for i in range(n):
    if arr[i]>max:
        max=arr[i]

if(max<=0):
    print(1)
    exit()

visited = [0]*(max+1)

for i in range(n):
    if arr[i]>0 and arr[i]<=max:
        visited[arr[i]]=1
    
for i in range(max,0,-1):
    if visited[i]==0:
        print(i)
        break

else:
    print(max+1)