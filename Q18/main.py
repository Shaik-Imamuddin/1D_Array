n=int(input())
arr=[]

for i in range(n):
    arr.append(int(input()))

min=arr[0]

for i in range(n):
    if arr[i]<min:
        min=arr[i]

print(min)