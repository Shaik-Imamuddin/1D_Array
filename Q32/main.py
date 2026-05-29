n=int(input())

arr=[]

for i in range(n):
    arr.append(int(input()))

target=int(input())

for i in range(n):
    if arr[i]==target:
        print(i)
        exit()
print("-1")