n = int(raw_input())
for i in range (n):
    a = raw_input()
    print "".join(str(x) for x in reversed(a))
