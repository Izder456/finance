=begin
Name : finance in Ruby
Author : Аїӡек Меѥҏ
Version : v1.0
License : N/A
=end

def input()
	print "Principal: "
	p = gets.chomp.to_f
	print "Rate : "
	r = gets.chomp.to_f
	print "Length (in Years) : "
	t = gets.chomp.to_f
	print "Times per year : "
	n = gets.chomp.to_i
	return p,r,t,n
end

def calculate(p,r,t,n)
	return ((p) * (1 + (r / n)))**((n) * (t))
end


p,r,t,n = input()
print calculate(p,r,t,n)


