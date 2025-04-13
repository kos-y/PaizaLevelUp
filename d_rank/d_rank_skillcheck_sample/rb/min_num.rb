min = 100
5.times do
    n = gets.to_i
    if n < min
        min = n
    end
end

puts min
