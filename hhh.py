import math
total_lambs = int(raw_input())
a = int(math.log(total_lambs+1,2))
dp = []
dp.append(1)
dp.append(1)
sum = 2
j = 2
for i in range(2,total_lambs):
    dp.append(dp[i-1] + dp[i-2])
    j = j + 1
    sum = sum + dp[i]
    if sum > total_lambs:
         j = j -1
         break;
print j-a
