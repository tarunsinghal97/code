n = int(raw_input())
l = raw_input()
lst = []
lst.append((l.count('h'))/2)
lst.append((l.count('a'))/2)
lst.append(l.count('c'))
lst.append(l.count('k'))
lst.append((l.count('e'))/2)
lst.append((l.count('r'))/2)
lst.append(l.count('t'))
print min(lst)
