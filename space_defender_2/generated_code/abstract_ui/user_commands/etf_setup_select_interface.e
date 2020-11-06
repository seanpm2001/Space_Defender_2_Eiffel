note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ETF_SETUP_SELECT_INTERFACE
inherit
	ETF_COMMAND
		redefine 
			make 
		end

feature {NONE} -- Initialization

	make(an_etf_cmd_name: STRING; etf_cmd_args: TUPLE; an_etf_cmd_container: ETF_ABSTRACT_UI_INTERFACE)
		do
			Precursor(an_etf_cmd_name,etf_cmd_args,an_etf_cmd_container)
			etf_cmd_routine := agent setup_select(?)
			etf_cmd_routine.set_operands (etf_cmd_args)
			if
				attached {INTEGER_32} etf_cmd_args[1] as value
			then
				out := "setup_select(" + etf_event_argument_out("setup_select", "value", value) + ")"
			else
				etf_cmd_error := True
			end
		end

feature -- command precondition 
	setup_select_precond(value: INTEGER_32): BOOLEAN
		do  
			Result := 
				         is_input_value(value)
					-- (1 <= value) and then (value <= 5)
		ensure then  
			Result = 
				         is_input_value(value)
					-- (1 <= value) and then (value <= 5)
		end 
feature -- command 
	setup_select(value: INTEGER_32)
		require 
			setup_select_precond(value)
    	deferred
    	end
end
