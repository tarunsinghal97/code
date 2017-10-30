n = int(raw_input())
for i in range (n):
    l = raw_input()
    if len(set(l)) == 3:
        print 'OK'
    else:
        print 'Not OK'
