n=int(input())
arr=[]

for i in range(n):
    arr.append(int(input()))

start=mid=0
end=n-1

while(mid<=end):
    if arr[mid]==0:
        temp=arr[mid]
        arr[mid]=arr[start]
        arr[start]=temp
        start+=1
        mid+=1
    elif arr[mid]==1:
        mid+=1
    else:
        temp=arr[mid]
        arr[mid]=arr[end]
        arr[end]=temp
        end-=1

for i in range(n):
    print(arr[i],end=" ")