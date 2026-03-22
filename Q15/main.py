n=int(input())
arr=[]

for i in range(n):
    arr.append(int(input()))

for i in range(n-1):
    if arr[i]<arr[i+1]:
        print("Not sorted in Descending Order")
        exit()
print("Sorted in Descending Order")