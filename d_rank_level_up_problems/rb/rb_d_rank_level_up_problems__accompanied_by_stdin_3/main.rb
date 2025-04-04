a, b, c = gets.split(' ').map(&:to_i)

n = 0
n += a
n *= b
n %= c
puts n
