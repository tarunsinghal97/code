n = int(raw_input())
l = raw_input()
f = 0
for i in range(len(l)):
    lst = []
    for j in range (i+1,len(l)):
        lst.append(l[i])
        lst.append(l[j])
        if len(set(lst)) == n:
            f = f+1
print f
