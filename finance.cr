###########################
#Name : finance in Crystal
#Author : Аїӡек Меѥҏ
#Version : v1.0
#License : N/A
###########################

def input()
	print "Principal: "
	p = gets.not_nil!.chomp.to_f
	print "Rate : "
	r = gets.not_nil!.chomp.to_f
	print "Length (in Years) : "
	t = gets.not_nil!.chomp.to_f
	print "Times per year : "
	n = gets.not_nil!.chomp.to_i
	return p,r,t,n
end

def calculate(p,r,t,n)
	return ((p) * (1 + (r / n)))**((n) * (t))
end


p,r,t,n = input()
print calculate(p,r,t,n)


