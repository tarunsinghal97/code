l = int(raw_input())
n = raw_input()
a = int(n.count('w'))
f =  int(n.count('vwv'))
g = int(n.count('vv'))
print (g//2) + (2**f) + len(n) - (3*f) -(2*g),
print len(n) + a
