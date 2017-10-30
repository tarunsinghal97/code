n = int(raw_input())
for i in range(n):
    a = int(raw_input())
    l = raw_input().split(' ')
    k = int(raw_input())
    l = sorted(l)
    l = map(int,l)
    f = 0
    for i in range(len(l)-1):
        for j in range (i+1,len(l)):
            if (l[i] + l[j]) == k:
                f = f+1
                if j != len(l)-1:
                    if l[j+1] > l[j]:
                        break
    print f
