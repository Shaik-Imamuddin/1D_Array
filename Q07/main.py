n=int(input())
arr=[]
for i in range(n):
    arr.append(int(input()))
start=0
for i in range(n):
    if arr[i]!=0:
        temp=arr[i]
        arr[i]=arr[start]
        arr[start]=temp
        start+=1
for i in range(n):
    print(arr[i],end=" ")