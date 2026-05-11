n=int(input())
arr=[]

for i in range(n):
    arr.append(int(input()))

for i in range(n):
    for j in range(i+1,n):
        if(arr[i]==arr[j]):
            for k in range(j,n-1):
                arr[k]=arr[k+1]
            n-=1
            j-=1

for i in range(n):
    print(arr[i],end=" ")