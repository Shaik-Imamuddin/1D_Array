n = int(input())
arr=[]

for i in range(n):
    arr.append(int(input()))

for i in range(n):
    if arr[i]!=i+1:
        print(i+1)
        exit()

print(n+1)