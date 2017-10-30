t = int(raw_input())
for _ in range(0,t):
	f = 0
	n = int(raw_input())
	i = 2;
	for __ in range(2,(n/i)+1):
		if n%i == 0:
			print "NO"
			f=1
			break
		i = i+1;
	if f==0:
		print "YES" 