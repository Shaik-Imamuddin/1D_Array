n=int(input())
arr=[]

for i in range(n):
    arr.append(int(input()))

min=arr[0]
secmin=arr[n-1]

for i in range(n):
    if arr[i]<min:
        secmin=min
        min=arr[i]
    elif arr[i]<secmin and arr[i]!=min:
        secmin=arr[i]

print(secmin)