l = map(int,raw_input().split(' '))
l = sorted(l)
sum = 0
s = []
for i in range(len(l)):
    sum = sum + l[i]
for i in range (len(l)):
    sum = sum - l[i]
    if(sum%3 == 0):
        del l[i]
        break
    else:
        sum = sum + l[i]
if sum%3 != 0:
    for i in range(len(l)):

if sum%3 != 0:
    print 0
else:
    for i in range(len(l)):
        s.append(l[len(l)-1-i])
    s = ''.join(str(x) for x in s)
    print s
