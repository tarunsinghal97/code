t = int(raw_input())
for _ in xrange(t):
    a , n , m =raw_input().split(' ')
    m = int(m)
    b = (int(a*(int(n))))%m
    c = b%(m)
    print c
