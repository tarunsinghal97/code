n = int(raw_input())
l = raw_input()
l = l.lower()
if len(set(l)) == 26:
    print "YES"
else:
    print "NO"
