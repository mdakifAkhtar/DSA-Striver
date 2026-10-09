# [916. Find Pairs with Given Sum in Doubly Linked List](https://takeuforward.org/practice/dsa/find-pairs-with-given-sum-in-doubly-linked-list)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given the head of a **sorted doubly linked list** of positive distinct integers, and a target integer, return a 2D array containing all unique pairs of nodes (a, b) such that **a + b == target.**

Each pair should be returned as a 2-element array [a, b] with a < b. The list is sorted in ascending order. If there are no such pairs, return an empty list.

### Example 1:

**Input:** head = [1, 2, 4, 5, 6, 8, 9], target = 7

**Output:** [[1, 6], [2, 5]]

**Explanation:**

1 + 6 = 7 and 2 + 5 = 7 are the valid pairs.

### Example 2:

**Input:** head = [1, 5, 6], target = 6

**Output:** [[1, 5]]

**Explanation:**

1 + 5 = 6 is the only valid pair.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 0 <= number of nodes <= 10^5
- 1 <= Node.val <= 10^5
- 1 <= target <= 10^5
- The linked list is sorted in strictly increasing order
- The linked list is contains distinct values

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
