l = raw_input()
l = list(l)
s = []
count = 0
for i in range(len(l)):
    l.append(l[0])
    del l[0]
    s.append(str(l))        
print len(set(s))
