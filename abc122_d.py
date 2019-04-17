#!bin/python3
from sys import exit
def check(a, b, c):
	d = a + b + c;
	off = ['ACG', 'AGC', 'GAC']
	if d in off:
		return False
	else:
		return True


n = int(input())

base = 1000000007

c = ['A', 'C', 'G', 'T']
pre = {}
cur = {}
for ch1 in c:
	for ch2 in c:
		for ch3 in c:
			if check (ch1, ch2, ch3):
				pre[ch1 + ch2 + ch3] = 1
for i in range(4, n+1):
	for s in pre.keys():
		for ch in c:
			st = s + ch
			if check(st[1], st[2], st[3]) and st[0] + st[2] + st[3] != 'AGC' and st[0] + st[1] + st[3] != 'AGC':
				key = st[1] + st[2] + st[3]
				if key in cur:
					tmp = cur[st[1] + st[2] + st[3]]
					tmp = (tmp + pre[s]) % base
					cur[st[1] + st[2] + st[3]] = tmp
				else:
					cur[key] = pre[s] 
				#cur[st[1] + st[2] + st[3]] += pre[s]
	pre = cur
	cur = {} 

res = 0
for num in pre.values():
	res = (res + num) % base 

print(res)