n=int(input())
arr=[]

for i in range(n):
    arr.append(int(input()))

ind=1
for i in range(1,n):
    if arr[i]!=arr[i-1]:
        arr[ind]=arr[i]
        ind+=1

for i in range(ind):
    print(arr[i],end=" ")