# [23. Implement Min Stack](https://takeuforward.org/practice/dsa/implement-min-stack)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Design a stack that supports the following operations in constant time: **push** , **pop** , **top** , and **retrieving the minimum element** .

Implement the MinStack class:

**MinStack():** Initializes the stack object.

**void push(int val):** Pushes the element val onto the stack.

**void pop():** removes the element on the top of the stack.

**int top():** gets the top element of the stack.

**int getMin():** retrieves the minimum element in the stack.

### Example 1:

Input:

["MinStack", "push", "push", "push", "getMin", "pop", "top", "getMin"]

[ [], [-2], [0], [-3], [ ], [ ], [ ], [ ] ]

Output:

[null, null, null, null, -3, null, 0, -2]

Explanation:

MinStack minStack = new MinStack();

minStack.push(-2);

minStack.push(0);

minStack.push(-3);

minStack.getMin(); // returns -3

minStack.pop();

minStack.top();&nbsp;&nbsp;// returns 0

minStack.getMin(); // returns -2

### Example 2:

Input:

["MinStack", "push", "push", "getMin", "push", "pop", "getMin", "top"]

[ [ ], [5], [1], [ ], [3], [ ], [ ], [ ] ]

Output:

[null, null, null, 1, null, null, 1, 1]

Explanation:

MinStack minStack = new MinStack();

minStack.push(5);

minStack.push(1);

minStack.getMin(); // returns 1

minStack.push(3);

minStack.pop();

minStack.getMin(); // returns 1

minStack.top();&nbsp;&nbsp;// returns 1

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- -10^5 <= val <=10^5
- Methods pop, top and getMin operations will always be called on non-empty stacks.
- At most 5*10^4 calls will be made to push, pop, top, and getMin.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
