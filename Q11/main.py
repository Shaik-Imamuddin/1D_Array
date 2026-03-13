n=int(input())
arr=[]

for i in range(n):
    arr.append(int(input()))

start,end=0,n-1

while(start<=end):
    temp=arr[start]
    arr[start]=arr[end]
    arr[end]=temp
    start+=1
    end-=1

for i in range(n):
    print(arr[i],end=" ")