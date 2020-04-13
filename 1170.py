
days =0

n = int(input())
while n!=0:
	c = float(input())
	while c>1:
		c=c/2
		days+=1
	print(days,end="")
	print(" dias")
	days=0
	n-=1
	