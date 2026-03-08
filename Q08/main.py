n=int(input())
arr=[]
for i in range(n):
    arr.append(int(input()))
start=0
for i in range(n):
    if arr[i]<0:
        temp=arr[i]
        for j in range(i,start,-1):
            arr[j]=arr[j-1]
        arr[start]=temp
        start+=1
for i in range(n):
    print(arr[i],end=" ")