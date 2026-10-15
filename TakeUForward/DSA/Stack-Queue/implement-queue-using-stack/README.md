# [68. Implement Queue using Stack](https://takeuforward.org/practice/dsa/implement-queue-using-stack)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Implement a First-In-First-Out (FIFO) queue using two stacks. The implemented queue should support the following operations: push, pop, peek, and isEmpty.

Implement the StackQueue class:

void push(int x): Adds element x to the end of the queue.

int pop(): Removes and returns the front element of the queue.

int peek(): Returns the front element of the queue without removing it.

boolean isEmpty(): Returns true if the queue is empty, false otherwise.

### Example 1:

Input:

["StackQueue", "push", "push", "pop", "peek", "isEmpty"]

[[], [4], [8], [], [], []]

Output:[null, null, null, 4, 8, false]

Explanation:

StackQueue queue = new StackQueue();

queue.push(4);

queue.push(8);

queue.pop(); // returns 4

queue.peek(); // returns 8

queue.isEmpty(); // returns false

### Example 2:

Input:

["StackQueue", "isEmpty"]

[[]]

Output: [null, true]

Explanation:

StackQueue queue = new StackQueue();

queue.isEmpty(); // returns true

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
