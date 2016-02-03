#include "SimpleLanguage.h"

// Create a container that holds code that can be called repeated from anywhere
variable sum_of is a_repeatable_process
that_uses list_of(whole_number) numbers
and_produces_a whole_number
start
	variable total is 0;
	for_each(number in numbers) total is total plus number;
	done_with total;
end;

// Program starts here
begin_with(arguments)
from_here
	list_of(whole_number) my_numbers;
	whole_number number;

	// Get user input
	repeat_this
		say "Please type a number and hit enter (0 to stop): ";
		get number;
		if (number is_equal_to 0) stop_repeating;
		otherwise my_numbers add_to_list(number);
		clear_the_screen;
	now_go_back

	// Get the total of all the numbers by using the lambda
	variable total is sum_of(my_numbers);
	// State the observations
	say "The total of your numbers is " then_say total then_end_the_line;
	if (total is_negative)
		say "which is a negative number";
	otherwise
		say "which is a positive number";
	if (total is_odd)
		say " and odd" then_end_the_line;
	otherwise
		say " and even" then_end_the_line;

	// Create a package containing some information
	package
		text name;
		text date;
	as my_details;
	my_details part name is "Andrew Fryer";
	my_details part date is "2015-02-03";

	// Say the information
	say "Created by: " then_say my_details part name then_end_the_line;
	say "Created on: " then_say my_details part date then_end_the_line;

	// Pause the program before exiting
	pause;
	done_with success;
end
