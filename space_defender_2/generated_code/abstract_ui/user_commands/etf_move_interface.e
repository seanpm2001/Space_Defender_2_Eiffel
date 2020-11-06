note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ETF_MOVE_INTERFACE
inherit
	ETF_COMMAND
		redefine 
			make 
		end

feature {NONE} -- Initialization

	make(an_etf_cmd_name: STRING; etf_cmd_args: TUPLE; an_etf_cmd_container: ETF_ABSTRACT_UI_INTERFACE)
		do
			Precursor(an_etf_cmd_name,etf_cmd_args,an_etf_cmd_container)
			etf_cmd_routine := agent move(? , ?)
			etf_cmd_routine.set_operands (etf_cmd_args)
			if
				attached {INTEGER_32} etf_cmd_args[1] as row and then attached {INTEGER_32} etf_cmd_args[2] as column
			then
				out := "move(" + etf_event_argument_out("move", "row", row) + "," + etf_event_argument_out("move", "column", column) + ")"
			else
				etf_cmd_error := True
			end
		end

feature -- command precondition 
	move_precond(row: INTEGER_32 ; column: INTEGER_32): BOOLEAN
		do  
			Result := 
				         is_row(row)
					-- (( row ~ A ) or else ( row ~ B ) or else ( row ~ C ) or else ( row ~ D ) or else ( row ~ E ) or else ( row ~ F ) or else ( row ~ G ) or else ( row ~ H ) or else ( row ~ I ) or else ( row ~ J ))
				and then is_column(column)
					-- (1 <= column) and then (column <= 30)
		ensure then  
			Result = 
				         is_row(row)
					-- (( row ~ A ) or else ( row ~ B ) or else ( row ~ C ) or else ( row ~ D ) or else ( row ~ E ) or else ( row ~ F ) or else ( row ~ G ) or else ( row ~ H ) or else ( row ~ I ) or else ( row ~ J ))
				and then is_column(column)
					-- (1 <= column) and then (column <= 30)
		end 
feature -- command 
	move(row: INTEGER_32 ; column: INTEGER_32)
		require 
			move_precond(row, column)
    	deferred
    	end
end
