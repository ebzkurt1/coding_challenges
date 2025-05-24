using ArgParse

function parse_commandline()
    s = ArgParseSettings()

    @add_arg_table s begin
        "-c"
            help = "number of bytes in the file"
            action = :store_true
        "-l"
            help = "number of lines in the file"
            action = :store_true
        "-w"
            help = "number of words in the file"
            action = :store_true
        "-m"
            help = "number of characters in the file"
            action = :store_true
        "filepath"
            help = "file path"
    end
    return parse_args(s)
end


function word_count(filepath)
    counter = 0
    for line in readlines(filepath), word in split(line)
        counter += 1
    end
    counter
end


function main()
    parsed_args = parse_commandline()
    filepath = parsed_args["filepath"]

    if filepath == nothing
        filepath = stdin
    end

    if parsed_args["c"]
        println(length(read(filepath)))
    end
    if parsed_args["l"]
        println(length(readlines(filepath)))
    end
    if parsed_args["w"]
        println(word_count(filepath))
    end
    if parsed_args["m"]
        println(length(read(filepath, String)))
    end
    if !parsed_args["c"] && !parsed_args["l"] && !parsed_args["w"] && !parsed_args["m"]
        c = length(read(filepath))
        l = length(readlines(filepath))
        w = word_count(filepath)
        println("    $(c)   $(l)   $(w)   $(filepath)")
    end
end

main()
