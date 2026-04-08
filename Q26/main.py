n=int(input())
arr=[]
for i in range(n):
    arr.append(int(input()))

for i in range(n):
    for j in range(i+1,n):
        if arr[i]==arr[j]:
            print(arr[i])
            exit()

print(-1)