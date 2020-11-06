note
	description: "[
		Demonstration of using the random number generator (RNG).
	]"
	author: "Kevin Banh"
	date: "$Date$"
	revision: "$Revision$"

class
	ROOT

inherit

	ARGUMENTS_32

	ES_SUITE -- testing via ESpec

create
	make

feature {NONE} -- Initialization

	make
		local
			random : RANDOM_GENERATOR_ACCESS
			num:INTEGER
		do
			print ("%N  Using the random number generator.%N")
			print ("  Note that the first two numbers generated are always the minimum specified.%N")

			-- generates a number from 50 to 60 inclusive
			num := random.rchoose(50,60)
			print ("  First number generated (e.g. from [50,60]) is always the minimun of the interval:" + num.out + "%N")

			-- generates a number from 1 to 101 inclusive
			num := random.rchoose(1,101)
			print ("  Second number generated (e.g. from [1,101]) is always still the minimun of the interval:" + num.out + "%N")

			-- generates a number from 50 to 60 inclusive
			num := random.rchoose(50,60)
			print ("  Starting from the third number, a random number is generated from the interval:" + num.out + "%N")

			-- generates a number from 40 to 60 inclusive
			num := random.rchoose(40,60)
			print ("  A random number is generated from the interval:" + num.out)
		end

end
