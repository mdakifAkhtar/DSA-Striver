# [919. Implement stack using Linkedlist](https://takeuforward.org/practice/dsa/implement-stack-using-linkedlist)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Implement a Last-In-First-Out (LIFO) stack using a singly linked list. The implemented stack should support the following operations: push, pop, top, and isEmpty.

Implement the LinkedListStack class:

void push(int x): Pushes element x onto the stack.

int pop(): Removes and returns the top element of the stack.

int top(): Returns the top element of the stack without removing it.

boolean isEmpty(): Returns true if the stack is empty, false otherwise.

### Example 1:

Input:

["LinkedListStack", "push", "push", "pop", "top", "isEmpty"]

[[], [3], [7], [], [], []]

Output: [null, null, null, 7, 3, false]

Explanation:

LinkedListStack stack = new LinkedListStack();

stack.push(3);

stack.push(7);

stack.pop(); // returns 7

stack.top(); // returns 3

stack.isEmpty(); // returns false

### Example 2:

Input:

["LinkedListStack", "isEmpty"]

[[]]

Output: [null, true]

Explanation:

LinkedListStack stack = new LinkedListStack();

stack.isEmpty(); // returns true

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= numbers of calls made <= 100
- 1 <= x <= 100

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
