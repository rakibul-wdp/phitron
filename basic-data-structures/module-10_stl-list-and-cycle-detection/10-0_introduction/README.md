### STL List and Cycle Detection

- List of STL
- reverse of Singly Linked List
- reverse of Doubly Linked List
- Cycle detect of Singly Linked List

### List built-in Functions:

#### Constructor

- list<type>myList; | Construct a list with 0 elements. | O(1)
- list<type>myList(N); | Construct a list with N elements and the value will be garbage. | O(N)
- list<type>myList(N, V); | Construct a list with N elements and the value will be V. | O(N)
- list<type>myList(list2); | Construct a list by copying another list list2. | O(N)
- list<type>myList(A, A + N); | Construct a list by copying all elements from an array A of size N. | O(N)

#### Capacity

- myList.size() | Returns the size of the list. | O(1)
- myList.max_size() | Returns the maximum size that the vector can hold. | O(1)
- myList.clear() | Clears the list elements. Do not delete the memory, only clear the list. | O(N)
- myList.empty() | Return true/false if the list is empty or not. | O(1)
- myList.resize() | Change the size of the list. | O(K); where K is the difference between new size and current size.
