#Simple Stack Implementation for Python
#Method of implementation based off the other language implementations you made. Keepo
#Tried to write the code as generically as possible without the special Python syntax and convention.
#Rest in pestos, it looks ugly even without.

#A few things to note. __init__ is the constructor. (ALWAYS)
#You can create attributes on the fly for classes. Whoop de doo
#Encapsulation in Python? LOL

class Node:

    def __init__(self, item, node):
        self.item = item
        self.next = node

        
class Stack:

    def __init__(self, objtype):
        if type(objtype) is not type:
            raise TypeError("%s is not a type." % (objtype))
            
        self.type = objtype
        self.top = None

    def push(self, item):
        if not isinstance(item, self.type):
            raise TypeError("Cannot push %s of type %s to Stack of type %s" % (str(item), str(item.__class__), str(self.type)))

        if self.top is None:
            self.top = Node(item, None)
        else:
            self.top = Node(item, self.top)

    def pop(self):
        if self.top is not None:
            popped = self.top.item
            self.top = self.top.next
            return popped
