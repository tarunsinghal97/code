l = map(int,raw_input().split(' '))
l1 = []
sum = 0
l2 = []
l0 = []
for i in range(len(l)):
    if l[i]%3 == 1:
        l1.append(l[i])
    elif l[i]%3 == 2:
        l2.append(l[i])
    elif l[i]%3==0:
        l0.append(l[i])
    sum = sum + l[i]
l1 = sorted(l1)
l2 = sorted(l2)
lf = []
if sum%3==1:
    if len(l1) != 0:
        del l1[0]
    elif len(l2)>1:
        del l2[0]
        del l2[0]
    else:
        print 0
elif sum%3==2:
    if len(l2)!=0:
        del l2[0]
    elif len(l1)>1:
        del l1[0]
        del l1[0]
    else:
        print 0
for i in range(len(l1)):
    lf.append(l1[i])
for i in range (len(l2)):
    lf.append(l2[i])
for i in range (len(l0)):
    lf.append(l0[i])
lf = sorted(lf)
lf.reverse()
lf = ''.join(str(x) for x in lf)
print lf
