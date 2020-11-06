note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ETF_SETUP_NEXT_INTERFACE
inherit
	ETF_COMMAND
		redefine 
			make 
		end

feature {NONE} -- Initialization

	make(an_etf_cmd_name: STRING; etf_cmd_args: TUPLE; an_etf_cmd_container: ETF_ABSTRACT_UI_INTERFACE)
		do
			Precursor(an_etf_cmd_name,etf_cmd_args,an_etf_cmd_container)
			etf_cmd_routine := agent setup_next(?)
			etf_cmd_routine.set_operands (etf_cmd_args)
			if
				attached {INTEGER_32} etf_cmd_args[1] as state
			then
				out := "setup_next(" + etf_event_argument_out("setup_next", "state", state) + ")"
			else
				etf_cmd_error := True
			end
		end

feature -- command precondition 
	setup_next_precond(state: INTEGER_32): BOOLEAN
		do  
			Result := 
				         is_state(state)
					-- (1 <= state) and then (state <= 5)
		ensure then  
			Result = 
				         is_state(state)
					-- (1 <= state) and then (state <= 5)
		end 
feature -- command 
	setup_next(state: INTEGER_32)
		require 
			setup_next_precond(state)
    	deferred
    	end
end
