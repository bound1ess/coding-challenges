def inapplicable
    puts "Inapplicable"
    exit
end

grid_size = gets.to_i

if grid_size < 3 or grid_size.even?
    inapplicable
end

grid = Array.new
bot, princess = nil, nil

grid_size.times.each do |row_index|
    row = gets.strip.split ""

    if row.length != grid_size
        inapplicable
    end

    if row.include? "b" or row.include? "p"
        row.each_with_index do |char, cell_index|
            if char == "b"
                bot = [row_index, cell_index]
            elsif char == "p"
                princess = [row_index, cell_index]
            end
        end
    end

    grid.push row
end

if bot.nil? or princess.nil?
    inapplicable
end

#puts grid.inspect, bot.inspect, princess.inspect
#moves = Array.new
y_diff, x_diff = princess[0] - bot[0], princess[1] - bot[1] - 1

#puts "Y: #{y_diff}, X: #{x_diff}"
#exit

y_diff.abs.times.each do |index|
    index += bot[0] + 1
    grid[index][bot[1]] = "#"
end

go_right = x_diff > 0

x_diff.abs.times.each do |index|
    index += bot[0] + (go_right ? 1 : -1)
    grid[princess[0]][index] = "#" unless grid[princess[0]][index] == "p"
end

#puts grid.inspect

grid.each do |row|
    puts row.join ""
end
