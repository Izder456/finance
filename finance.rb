=begin
Name : finance in Ruby
Author : Аїӡек Меѥҏ
Version : v1.0
License : N/A
=end

def calculate(p,r,t,n)
  power = (1+(r / n))**(t * n)
  roi = p * power
  return roi
end

print "Principal: "
p = gets.chomp.to_f
print "Rate : "
r = gets.chomp.to_f
print "Length (in Years) : "
t = gets.chomp.to_f
print "Times per year : "
n = gets.chomp.to_i
principal = p
rate = r
year = t
times = n
print "Interest : "
print calculate(principal, rate, year, times)


