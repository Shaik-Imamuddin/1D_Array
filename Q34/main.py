n=int(input())

arr=[]

for i in range(n):
    arr.append(int(input()))

target = int(input())

f=l=-1

for i in range(n):
    if arr[i]==target:
        if f==-1:
            f=i
        l=i

print(f,l)