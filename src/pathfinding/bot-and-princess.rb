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
