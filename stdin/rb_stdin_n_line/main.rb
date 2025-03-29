line_count = gets.to_i

lines = []
line_count.times do
    lines << gets.chomp
end

lines.each do |line|
    puts line
end
