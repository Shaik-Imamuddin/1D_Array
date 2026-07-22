n = int(input())

arr=[]
for i in range(n):
    arr.append(int(input()))

for i in range(n//2):
    if arr[i]!=arr[n-i-1]:
        print("Not a Palindrome")
        break
else:
    print("Palindrome")