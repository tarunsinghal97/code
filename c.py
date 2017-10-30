import re
l = raw_input().split(' ')
a,b,c=raw_input().split(' ')
b = int(b)
c = int(c)
if re.search(a*b,l):
    print "9"
else:
    print "6"
