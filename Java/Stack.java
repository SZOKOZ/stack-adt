/*
Stack<T> Class
December 10, 2017
Implementation of the Stack ADT in Java.
*/
public final class Stack<T> {
    
    /*
    E<T> Class
    Private class containing (E)lements of the Stack<T>
    */
    class E<T> {
        public T data = null;
        public E next = null;
        
        public E(T data, E next) {
            this.data = data;
            this.next = next;
        }
    }
    
    private E<T> top;
    
    // Initialize Stack with null top.
    public Stack() {
        this.top = null;
    }
    
    // Initialize Stack with an array of type T.
    public Stack(T[] array) {
        for(T element : array)
            this.push(element);
    }
    
    // Returns the data stored in the top or null if empty.
    public T top() {
        if(top == null)
            return null;
        else
            return top.data;
    }
    
    // Pushes a new element into the Stack.
    public T push(T pushed) {
        if(top == null)
            top = new E(pushed, null);
        else
            top = new E(pushed, top);
        return pushed;
    }
    
    // Pops the element stored in the top or null.
    public T pop() {
        if(top == null)
            return null;
        T popped = top.data;
        top = top.next;
        return popped;
    }   
}
