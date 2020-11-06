note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_SETUP_BACK
inherit 
	ETF_SETUP_BACK_INTERFACE
create
	make
feature -- command 
	setup_back(state: INTEGER_32)
		require else 
			setup_back_precond(state)
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
