def reverse(arr,start,end):
    while start<end:
        arr[start],arr[end] = arr[end],arr[start]
        start+=1
        end-=1

n = int(input())

arr=[]

for i in range(n):
    arr.append(int(input()))

k = int(input())
k=k%n

reverse(arr,0,n-1)
reverse(arr,0,k-1)
reverse(arr,k,n-1)

for i in range(n):
    print(arr[i],end=" ")