t = int(raw_input())
for _ in range(t):
    l = raw_input()
    a = int(raw_input())
    b = int(l,2)
    if b%a == 0:
        print "YES"
    else:
        print "NO"
