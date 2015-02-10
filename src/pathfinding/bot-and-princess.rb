def inapplicable
    puts "Inapplicable"
    exit
end

puts "Input:"
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

# Step 1: render Y.
if bot[0] > princess[0]
    # Move up.
    (princess[0]...bot[0]).each do |index|
        grid[index][bot[1]] = "#" unless ["b", "p"].include? grid[index][bot[1]]
    end
else
    # Move down.
    (bot[0]...princess[0]).each do |index|
        grid[index][princess[1]] = "#" unless ["b", "p"].include? grid[index][princess[1]]
    end
end

# Step 2: render X.

puts "Output:"

grid.each do |row|
    puts row.join ""
end
