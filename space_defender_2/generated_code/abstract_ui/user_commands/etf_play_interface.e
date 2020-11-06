note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ETF_PLAY_INTERFACE
inherit
	ETF_COMMAND
		redefine 
			make 
		end

feature {NONE} -- Initialization

	make(an_etf_cmd_name: STRING; etf_cmd_args: TUPLE; an_etf_cmd_container: ETF_ABSTRACT_UI_INTERFACE)
		do
			Precursor(an_etf_cmd_name,etf_cmd_args,an_etf_cmd_container)
			etf_cmd_routine := agent play(? , ? , ? , ? , ? , ? , ?)
			etf_cmd_routine.set_operands (etf_cmd_args)
			if
				attached {INTEGER_32} etf_cmd_args[1] as row and then attached {INTEGER_32} etf_cmd_args[2] as column and then attached {INTEGER_32} etf_cmd_args[3] as g_threshold and then attached {INTEGER_32} etf_cmd_args[4] as f_threshold and then attached {INTEGER_32} etf_cmd_args[5] as c_threshold and then attached {INTEGER_32} etf_cmd_args[6] as i_threshold and then attached {INTEGER_32} etf_cmd_args[7] as p_threshold
			then
				out := "play(" + etf_event_argument_out("play", "row", row) + "," + etf_event_argument_out("play", "column", column) + "," + etf_event_argument_out("play", "g_threshold", g_threshold) + "," + etf_event_argument_out("play", "f_threshold", f_threshold) + "," + etf_event_argument_out("play", "c_threshold", c_threshold) + "," + etf_event_argument_out("play", "i_threshold", i_threshold) + "," + etf_event_argument_out("play", "p_threshold", p_threshold) + ")"
			else
				etf_cmd_error := True
			end
		end

feature -- command precondition 
	play_precond(row: INTEGER_32 ; column: INTEGER_32 ; g_threshold: INTEGER_32 ; f_threshold: INTEGER_32 ; c_threshold: INTEGER_32 ; i_threshold: INTEGER_32 ; p_threshold: INTEGER_32): BOOLEAN
		do  
			Result := 
				         is_max_row(row)
					-- (5 <= row) and then (row <= 10)
				and then is_max_column(column)
					-- (10 <= column) and then (column <= 30)
				and then is_threshold(g_threshold)
					-- (1 <= g_threshold) and then (g_threshold <= 101)
				and then is_threshold(f_threshold)
					-- (1 <= f_threshold) and then (f_threshold <= 101)
				and then is_threshold(c_threshold)
					-- (1 <= c_threshold) and then (c_threshold <= 101)
				and then is_threshold(i_threshold)
					-- (1 <= i_threshold) and then (i_threshold <= 101)
				and then is_threshold(p_threshold)
					-- (1 <= p_threshold) and then (p_threshold <= 101)
		ensure then  
			Result = 
				         is_max_row(row)
					-- (5 <= row) and then (row <= 10)
				and then is_max_column(column)
					-- (10 <= column) and then (column <= 30)
				and then is_threshold(g_threshold)
					-- (1 <= g_threshold) and then (g_threshold <= 101)
				and then is_threshold(f_threshold)
					-- (1 <= f_threshold) and then (f_threshold <= 101)
				and then is_threshold(c_threshold)
					-- (1 <= c_threshold) and then (c_threshold <= 101)
				and then is_threshold(i_threshold)
					-- (1 <= i_threshold) and then (i_threshold <= 101)
				and then is_threshold(p_threshold)
					-- (1 <= p_threshold) and then (p_threshold <= 101)
		end 
feature -- command 
	play(row: INTEGER_32 ; column: INTEGER_32 ; g_threshold: INTEGER_32 ; f_threshold: INTEGER_32 ; c_threshold: INTEGER_32 ; i_threshold: INTEGER_32 ; p_threshold: INTEGER_32)
		require 
			play_precond(row, column, g_threshold, f_threshold, c_threshold, i_threshold, p_threshold)
    	deferred
    	end
end
