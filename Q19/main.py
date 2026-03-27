n= int(input())

arr=[]

for i in range(n):
    arr.append(int(input()))

max=secmax=arr[0]

for i in range(n):
    if arr[i]>max:
        secmax = max
        max = arr[i]
    elif arr[i]>secmax and max!=arr[i]:
        secmax = arr[i]
    
print(secmax)