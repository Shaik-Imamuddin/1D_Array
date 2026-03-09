n=int(input())
arr=[]
for i in range(n):
    arr.append(int(input()))
    if arr[i]<0:
        arr[i]=0

for i in range(n):
    print(arr[i],end=" ")