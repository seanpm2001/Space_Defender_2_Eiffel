note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_TOGGLE_DEBUG_MODE
inherit 
	ETF_TOGGLE_DEBUG_MODE_INTERFACE
create
	make
feature -- command 
	toggle_debug_mode
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
