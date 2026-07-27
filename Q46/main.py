n = int(input())
arr=[]

for i in range(n):
    arr.append(int(input()))

total = sum(arr)
start=0
for i in range(n):
    end=total-start-arr[i]
    if start==end:
        print(i)
        break
    start+=arr[i]
else:
    print(-1)    