t = int(raw_input())
for p in range(t):
    mini = 0
    n = int(raw_input())
    for i in range(n):
        l = raw_input()
        J = l.count(' ')
        if J > 0:
            leng = len(set(l))-1
        else:
            leng = len(set(l))
        if leng > mini:
            lst = l
            mini = leng
    print "Case #"+str(int(p+1))+": "+lst
