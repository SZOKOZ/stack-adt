-- Stack "Class"
-- December 10, 2017
-- Implementation of the Stack ADT in Lua.

STACK = {}

-- Wrapper function that creates and returns the "Stack" _stack and methods.
function STACK:Create()

	local _stack = {}
	_stack.list = {}

	-- Returns the first element in _stack.list or nil.
	function _stack:top()
		if self.list[1] then
			return self.list[1]
		else
			return nil
		end
	end

	-- Pushes a new element into _stack.list.
	function _stack:push( pushed )
		if pushed then
			table.insert(self.list, pushed)
		end
	end

	-- Pops the element stored in _stack.list or nil.
	function _stack:pop()
		if self.list[1] then
			return table.remove(self.list, #self.list)
		else
			return nil
		end
	end

	return _stack
end

