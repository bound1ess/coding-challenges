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
x_diff, y_diff = (bot[0] - princess[0]).abs, (bot[1] - princess[1]).abs

if x_diff > 0
    x_diff -= 1
end

puts "UP/DOWN: #{y_diff}, LEFT/RIGHT: #{x_diff}"

if y_diff != 0
    (y_diff - 1).times.each do |row_index|
        grid[row_index + 1][bot[1]] = "#"
    end
end

if x_diff != 0
    (x_diff - 1).times.each do |cell_index|
        grid[princess[0]][cell_index + 1] = "#"
    end
end

#puts grid.inspect

grid.each do |row|
    puts row.join ""
end
