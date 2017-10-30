t = int(raw_input())
sum =0
max=0
j=1
for i in range(t):
    l = raw_input().split(' ')
    for k in range (len(l)):
        if j == k:
            j = j+1
        if len(l[j]) == len(l[k]):
                sum = sum + 1
                j = j +1
                k = k - 1
        else:
                pass
        if max < sum:
                 max=sum
        if j>len(l)-1:
            break
    print sum


