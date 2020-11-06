class
 	 ETF_TYPE_CONSTRAINTS

feature -- type queries 

	is_input_value(etf_v: INTEGER_32): BOOLEAN 
		require
			comment("etf_v: INPUT_VALUE = 1 .. 5")
		do
			 Result := 
				(1 <= etf_v) and then (etf_v <= 5)
		ensure
			 Result = 
				(1 <= etf_v) and then (etf_v <= 5)
		end

	is_state(etf_v: INTEGER_32): BOOLEAN 
		require
			comment("etf_v: STATE = 1 .. 5")
		do
			 Result := 
				(1 <= etf_v) and then (etf_v <= 5)
		ensure
			 Result = 
				(1 <= etf_v) and then (etf_v <= 5)
		end

	is_max_row(etf_v: INTEGER_32): BOOLEAN 
		require
			comment("etf_v: MAX_ROW = 5 .. 10")
		do
			 Result := 
				(5 <= etf_v) and then (etf_v <= 10)
		ensure
			 Result = 
				(5 <= etf_v) and then (etf_v <= 10)
		end

	is_max_column(etf_v: INTEGER_32): BOOLEAN 
		require
			comment("etf_v: MAX_COLUMN = 10 .. 30")
		do
			 Result := 
				(10 <= etf_v) and then (etf_v <= 30)
		ensure
			 Result = 
				(10 <= etf_v) and then (etf_v <= 30)
		end

	is_row(etf_v: INTEGER_32): BOOLEAN 
		require
			comment("etf_v: ROW = {A, B, C, D, E, F, G, H, I, J}")
		do
			 Result := 
				(( etf_v ~ A ) or else ( etf_v ~ B ) or else ( etf_v ~ C ) or else ( etf_v ~ D ) or else ( etf_v ~ E ) or else ( etf_v ~ F ) or else ( etf_v ~ G ) or else ( etf_v ~ H ) or else ( etf_v ~ I ) or else ( etf_v ~ J ))
		ensure
			 Result = 
				(( etf_v ~ A ) or else ( etf_v ~ B ) or else ( etf_v ~ C ) or else ( etf_v ~ D ) or else ( etf_v ~ E ) or else ( etf_v ~ F ) or else ( etf_v ~ G ) or else ( etf_v ~ H ) or else ( etf_v ~ I ) or else ( etf_v ~ J ))
		end

	is_column(etf_v: INTEGER_32): BOOLEAN 
		require
			comment("etf_v: COLUMN = 1 .. 30")
		do
			 Result := 
				(1 <= etf_v) and then (etf_v <= 30)
		ensure
			 Result = 
				(1 <= etf_v) and then (etf_v <= 30)
		end

	is_threshold(etf_v: INTEGER_32): BOOLEAN 
		require
			comment("etf_v: THRESHOLD = 1 .. 101")
		do
			 Result := 
				(1 <= etf_v) and then (etf_v <= 101)
		ensure
			 Result = 
				(1 <= etf_v) and then (etf_v <= 101)
		end

feature -- constants for enumerated items 
	A: INTEGER =1
	B: INTEGER =2
	C: INTEGER =3
	D: INTEGER =4
	E: INTEGER =5
	F: INTEGER =6
	G: INTEGER =7
	H: INTEGER =8
	I: INTEGER =9
	J: INTEGER =10

feature -- list of enumeratd constants
	enum_items : HASH_TABLE[INTEGER, STRING]
		do
			create Result.make (10)
			Result.extend(1, "A")
			Result.extend(2, "B")
			Result.extend(3, "C")
			Result.extend(4, "D")
			Result.extend(5, "E")
			Result.extend(6, "F")
			Result.extend(7, "G")
			Result.extend(8, "H")
			Result.extend(9, "I")
			Result.extend(10, "J")
		end

	enum_items_inverse : HASH_TABLE[STRING, INTEGER_32]
		do
			create Result.make (10)
			Result.extend("A", 1)
			Result.extend("B", 2)
			Result.extend("C", 3)
			Result.extend("D", 4)
			Result.extend("E", 5)
			Result.extend("F", 6)
			Result.extend("G", 7)
			Result.extend("H", 8)
			Result.extend("I", 9)
			Result.extend("J", 10)
		end
feature -- query on declarations of event parameters
	evt_param_types_table : HASH_TABLE[HASH_TABLE[ETF_PARAM_TYPE, STRING], STRING]
		local
			play_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			setup_select_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			setup_next_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			setup_back_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			toggle_debug_mode_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			abort_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			move_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			pass_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			fire_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
			special_param_types: HASH_TABLE[ETF_PARAM_TYPE, STRING]
		do
			create Result.make (10)
			Result.compare_objects
			create play_param_types.make (10)
			play_param_types.compare_objects
			play_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("MAX_ROW", create {ETF_INTERVAL_PARAM}.make(5, 10)), "row")
			play_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("MAX_COLUMN", create {ETF_INTERVAL_PARAM}.make(10, 30)), "column")
			play_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("THRESHOLD", create {ETF_INTERVAL_PARAM}.make(1, 101)), "g_threshold")
			play_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("THRESHOLD", create {ETF_INTERVAL_PARAM}.make(1, 101)), "f_threshold")
			play_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("THRESHOLD", create {ETF_INTERVAL_PARAM}.make(1, 101)), "c_threshold")
			play_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("THRESHOLD", create {ETF_INTERVAL_PARAM}.make(1, 101)), "i_threshold")
			play_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("THRESHOLD", create {ETF_INTERVAL_PARAM}.make(1, 101)), "p_threshold")
			Result.extend (play_param_types, "play")
			create setup_select_param_types.make (10)
			setup_select_param_types.compare_objects
			setup_select_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("INPUT_VALUE", create {ETF_INTERVAL_PARAM}.make(1, 5)), "value")
			Result.extend (setup_select_param_types, "setup_select")
			create setup_next_param_types.make (10)
			setup_next_param_types.compare_objects
			setup_next_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("STATE", create {ETF_INTERVAL_PARAM}.make(1, 5)), "state")
			Result.extend (setup_next_param_types, "setup_next")
			create setup_back_param_types.make (10)
			setup_back_param_types.compare_objects
			setup_back_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("STATE", create {ETF_INTERVAL_PARAM}.make(1, 5)), "state")
			Result.extend (setup_back_param_types, "setup_back")
			create toggle_debug_mode_param_types.make (10)
			toggle_debug_mode_param_types.compare_objects
			Result.extend (toggle_debug_mode_param_types, "toggle_debug_mode")
			create abort_param_types.make (10)
			abort_param_types.compare_objects
			Result.extend (abort_param_types, "abort")
			create move_param_types.make (10)
			move_param_types.compare_objects
			move_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("ROW", create {ETF_ENUM_PARAM}.make(<<"A", "B", "C", "D", "E", "F", "G", "H", "I", "J">>)), "row")
			move_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("COLUMN", create {ETF_INTERVAL_PARAM}.make(1, 30)), "column")
			Result.extend (move_param_types, "move")
			create pass_param_types.make (10)
			pass_param_types.compare_objects
			Result.extend (pass_param_types, "pass")
			create fire_param_types.make (10)
			fire_param_types.compare_objects
			Result.extend (fire_param_types, "fire")
			create special_param_types.make (10)
			special_param_types.compare_objects
			Result.extend (special_param_types, "special")
		end
feature -- query on declarations of event parameters
	evt_param_types_list : HASH_TABLE[LINKED_LIST[ETF_PARAM_TYPE], STRING]
		local
			play_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			setup_select_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			setup_next_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			setup_back_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			toggle_debug_mode_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			abort_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			move_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			pass_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			fire_param_types: LINKED_LIST[ETF_PARAM_TYPE]
			special_param_types: LINKED_LIST[ETF_PARAM_TYPE]
		do
			create Result.make (10)
			Result.compare_objects
			create play_param_types.make
			play_param_types.compare_objects
			play_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("MAX_ROW", create {ETF_INTERVAL_PARAM}.make(5, 10)))
			play_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("MAX_COLUMN", create {ETF_INTERVAL_PARAM}.make(10, 30)))
			play_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("THRESHOLD", create {ETF_INTERVAL_PARAM}.make(1, 101)))
			play_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("THRESHOLD", create {ETF_INTERVAL_PARAM}.make(1, 101)))
			play_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("THRESHOLD", create {ETF_INTERVAL_PARAM}.make(1, 101)))
			play_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("THRESHOLD", create {ETF_INTERVAL_PARAM}.make(1, 101)))
			play_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("THRESHOLD", create {ETF_INTERVAL_PARAM}.make(1, 101)))
			Result.extend (play_param_types, "play")
			create setup_select_param_types.make
			setup_select_param_types.compare_objects
			setup_select_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("INPUT_VALUE", create {ETF_INTERVAL_PARAM}.make(1, 5)))
			Result.extend (setup_select_param_types, "setup_select")
			create setup_next_param_types.make
			setup_next_param_types.compare_objects
			setup_next_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("STATE", create {ETF_INTERVAL_PARAM}.make(1, 5)))
			Result.extend (setup_next_param_types, "setup_next")
			create setup_back_param_types.make
			setup_back_param_types.compare_objects
			setup_back_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("STATE", create {ETF_INTERVAL_PARAM}.make(1, 5)))
			Result.extend (setup_back_param_types, "setup_back")
			create toggle_debug_mode_param_types.make
			toggle_debug_mode_param_types.compare_objects
			Result.extend (toggle_debug_mode_param_types, "toggle_debug_mode")
			create abort_param_types.make
			abort_param_types.compare_objects
			Result.extend (abort_param_types, "abort")
			create move_param_types.make
			move_param_types.compare_objects
			move_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("ROW", create {ETF_ENUM_PARAM}.make(<<"A", "B", "C", "D", "E", "F", "G", "H", "I", "J">>)))
			move_param_types.extend (create {ETF_NAMED_PARAM_TYPE}.make("COLUMN", create {ETF_INTERVAL_PARAM}.make(1, 30)))
			Result.extend (move_param_types, "move")
			create pass_param_types.make
			pass_param_types.compare_objects
			Result.extend (pass_param_types, "pass")
			create fire_param_types.make
			fire_param_types.compare_objects
			Result.extend (fire_param_types, "fire")
			create special_param_types.make
			special_param_types.compare_objects
			Result.extend (special_param_types, "special")
		end
feature -- comments for contracts
	comment(etf_s: STRING): BOOLEAN
		do
			Result := TRUE
		end
end