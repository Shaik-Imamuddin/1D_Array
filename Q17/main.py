n=int(input())
arr=[]

for i in range(n):
    arr.append(int(input()))

max=arr[0]

for i in range(n):
    if arr[i]>max:
        max=arr[i]

print(max)