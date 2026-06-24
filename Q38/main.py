n=int(input())

arr=[]
for i in range(n):
    arr.append(int(input()))

target = int(input())
start=end=currsum=0

for i in range(n):
    currsum+=arr[end]
    end+=1

    while currsum>target and start<=end:
        currsum-=arr[start]
        start+=1

    if currsum==target:
        break

for i in range(start,end):
    print(arr[i],end=" ")