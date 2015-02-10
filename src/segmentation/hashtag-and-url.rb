words = File.read(File.dirname(__FILE__) + "/words.txt").split $/

gets.to_i.times do
    element, tokens = gets.strip, []

    # Check if it's a hashtag.
    if element[0] == "#"
        element["#"] = ""
    else
        # Otherwise it'a an URL.
        element["www."] = ""
        element[/\.(\w+)/] = ""
    end

    # Logic
    while element.length != 0
        length = 0

        element.length.times do
            length += 1

            if words.include? element[0, length]
                tokens.push element[0, length]
                element[element[0, length]] = ""

                break
            end
        end
    end

    puts tokens.join " "
end
