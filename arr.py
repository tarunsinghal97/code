n = int(raw_input())
l = []
lst = []
j = 0
for i in range (n):
    l.append(raw_input())
for i in range (0,n-1):
    if l[i+1] != '0':
       lst.append(l[i])
lst.append(l[n-1])
lst =  map(int,lst)
print lst
for j in range (len(lst)):
    j = j + lst[j]
print j
