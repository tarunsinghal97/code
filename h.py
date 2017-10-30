t = int(raw_input())
for _ in range(t):
    a,b = map(int,raw_input().split(' '))
    l = raw_input().split(' ')
    l2 = raw_input().split(' ')
    l3 = l2 + l
    print len(set(l)) + len(set(l2)) -len(set(l3))
