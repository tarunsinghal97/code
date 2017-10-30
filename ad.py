n = int(raw_input())
for i in range(n):
    l = raw_input()
    lst = raw_input()
    if len(lst) > len(l):
        a = len(lst) - len(l)
        for j in range(len(l),len(l)+a):
            l.append('0')
    elif len(lst) < len(l):
        b = len(l) - len(lst)
        for k in range(len(lst),len(lst)+b):
            lst.append('0')
    l = reversed(l)
    lst = reversed(lst)
    ll = []
    ll = [x + y for x , y in zip(l,lst)]
    ll = reversed(ll)
    print ''.join(str(x) for x in ll)
