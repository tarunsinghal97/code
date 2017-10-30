l = (raw_input())
a = len(l)
l = map(int,l)
s = 0
for i in range(a):
    if l[i] == 1:
        s = s+2
    elif l[i] == 2 or l[i] == 3 or l[i] == 5 :
        s = s+5
    elif l[i] == 6 or l[i] == 9 or l[i] == 0:
        s = s+6
    elif l[i] == 4:
        s = s+4
    elif l[i] == 7:
        s = s+3
    elif l[i] == 8:
        s = s+7
print s
