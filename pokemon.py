n = int(raw_input())
l = raw_input().split( )
a = len(set(l))
f = 0
for s in range (len(l)-1):
    lst = []
    for j in range(s,len(l)):
              lst.append(l[j])
              if len(set(lst)) == a:
                   f=f+1
print f
