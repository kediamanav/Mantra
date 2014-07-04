note
	description: "Summary description for {EIFFEL_FEATURE_CALLERS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EIFFEL_FEATURE_CALLERS

create
	make

feature -- Make
	make(a_str:STRING;a_class:STRING;a_feature:STRING)
		do
			initialize (a_str,a_class,a_feature)
			create_list
		end

feature --Access
	message:STRING
	class_name:STRING
	feature_name:STRING
	json_array:JSON_ARRAY
	class_string:STRING
	index:INTEGER

feature --Execution
	initialize(a_str:STRING;a_class:STRING;a_feature:STRING)
		--Initialize the message, class and feature to the local strings of this class
		require
			string_not_empty: a_str/=Void and not a_str.is_empty
			class_string_not_empty: a_class/=Void and not a_class.is_empty
			feature_string_not_empty: a_feature/=Void and not a_feature.is_empty
		do
			message:=a_str
			class_name:=a_class
			feature_name:=a_feature
			message.replace_substring_all ("%N", "<br>")
			message.replace_substring_all ("%T","$")
			message.replace_substring_all ("\t","$")
			index:=1
		ensure
			string_set: message=a_str
			class_set: class_name=a_class
			feature_set: feature_name=a_feature
		end

	create_list
		--Parses the callers
		local
			i,j:INTEGER
			count:INTEGER
			json_object:JSON_OBJECT
			json_arr:JSON_ARRAY
			json_obj:JSON_OBJECT
		do
			create json_array.make_array

			--If empty simply return empty array
			if message.at(index)='<' then
				--Its empty do nothing
			else
				--Setting index to the next line
				from
					i:=index
				until
					i>message.count or message.at(i)='<'
				loop
					i:=i+1
				end
				index:=i+4

				count:=get_count
				--Starting the main loop
				from
					i:=index
				until
					i>message.count or message.at(i)/='$' or count/=1
				loop
					create json_object.make
					count:=get_count
					index:=index+count

					--Extracting the class string
					from
						j:=index
					until
						j>message.count or message.at(j)='<'
					loop
						j:=j+1
					end
					class_string:=message.substring (index, j-1)
					json_object.put_string (class_string, "Class_Name")

					--Move to the next line
					index:=j+4
					count:=get_count
					create json_arr.make_array

					--Loop for extracting the features of the class
					from
					until
						count/=2
					loop
						index:=index+count
						from
							j:=index
						until
							j>message.count or message.at(j)='<'
						loop
							j:=j+1
						end
						feature_name:=message.substring (index, j-1)
						create json_obj.make
						json_obj.put_string (feature_name, "Feature_Name")
						json_arr.add (json_obj)
						index:=j+4
						count:=get_count
					end
					json_object.put (json_arr, "Features")
					json_array.add (json_object)
				end
			end
		end

		get_count:INTEGER
			local
				i:INTEGER
				count:INTEGER
			do
				count:=0
				--Extract the leading tabs
				from
					i:=index
				until
					message.at (i)/='$'
				loop
					count:=count+1
					i:=i+1
				end
				Result:=count
			end
end
