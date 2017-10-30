n = int(raw_input())
for i in range (n):
    a = int(raw_input())
    l = raw_input().split( )
    l.sort()
    l = map(int ,l)
    for number in reversed(l):
        print number,
