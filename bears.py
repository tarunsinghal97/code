n = raw_input()
num = int(raw_input())
for i in range (num):
    ni = raw_input()
    s1 = set(ni)
    s2 = set(n)
    lst = []
    lst2 = []
    l = []
    f = 0
    if len(s1.intersection(s2)) == 0:
            print '0'
    else:
        for items in ni:
            lst.append(ni.count(items))
            lst2.append(n.count(items))
        for i in range(len(lst)):
            if lst[i]>lst2[i]:
                f = 0
                print '0'
                break
            else:
                f = f+1
                l.append(lst2[i]/lst[i])
        if f == 0:
            break;
        else:
            print min(l)


