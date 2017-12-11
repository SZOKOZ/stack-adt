require("Stack")

-- TestStack Script
-- December 10, 2017
-- Demonstration of the Stack ADT in Lua.

local stack = STACK:Create()

-- Ask for user input until end condition is met.
while true do
	io.write("Please enter a non-negative number to convert to binary: \n")
	input = io.read("*n")

	-- If negative is entered, break loop.
	if input < 0 then break end

	-- User our "Stack" for binary conversion.
	repeat
		stack:push(input % 2)
		input = math.floor(input / 2)
	until input == 0

	-- Pop elements of out "Stack" to print conversion.
	while stack:top() do
		io.write(stack:pop())
	end

	-- Prepare new lines for next input.
	io.write("\n\n")

end