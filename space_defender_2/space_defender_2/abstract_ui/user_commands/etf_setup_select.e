note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_SETUP_SELECT
inherit 
	ETF_SETUP_SELECT_INTERFACE
create
	make
feature -- command 
	setup_select(value: INTEGER_32)
		require else 
			setup_select_precond(value)
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
