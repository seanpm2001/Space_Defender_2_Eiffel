note
    description: "[
        The {RANDOM_GENERATOR} class is used to generate
        random numbers using the same seed 
        (deterministically).
    ]"
    author: ""
    date: "April 30, 2019"
    revision: "1"

class
    RANDOM_GENERATOR

create {RANDOM_GENERATOR_ACCESS}
    make_debug

feature{NONE} -- attributes

    n_seed: RANDOM
         -- used to generate random numbers

	counter:INTEGER

feature{NONE} -- constructors

    make_debug
    		-- returns random numbers for debug purposes
    		-- deterministic
        do
            create n_seed.make
            counter := 0
            n_seed.set_seed (900)
        end

feature -- queries

    num: INTEGER
    		-- Returns the current number in a sequence of random numbers
        do
            Result := n_seed.item
            if counter <=1 then
            	counter := counter + 1
            	Result := 0
            end
        end

feature -- commands

    forth
			-- Move to next number in a sequence of random numbers
        do
            n_seed.forth
        end

end
