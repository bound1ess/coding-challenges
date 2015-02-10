words = File.read(File.dirname(__FILE__) + "/words.txt").split $/

gets.to_i.times.each do
    element, tokens = gets.strip, []

    # Check if it's a hashtag.
    if element[0] == "#"
        element[/#/] = ""
    else
        # Otherwise it'a an URL.
        element[/www\./] = ""
        element[/\.(\w+)/] = ""
    end

    # Logic

    puts tokens.join " "
end
