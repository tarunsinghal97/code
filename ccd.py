import re
l = []
indx = 0
n = int(raw_input())
l1 = raw_input()
l2 = raw_input()
for i in range(n):
    l.append(str(l1[i]))
    ll = ''.join(str(x) for x in l)
    if re.search(ll,l2)==None:
        break
    else:
        indx = re.search(ll,l2).start()
print n-indx+1
