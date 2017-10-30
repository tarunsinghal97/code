n = int(raw_input())
l = raw_input()
lst = []
for i in range (1,n+1):
    lst.append(i)
i=0
while len(lst)>1:
    for j in range (len(l)):
        if l[i] == 'a':
            i = i+1
        elif l[i] == 'b':
           del l[i]
           i = i+1
        a = i
print l[a]
