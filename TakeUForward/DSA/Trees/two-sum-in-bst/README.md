# [122. Two sum in BST](https://takeuforward.org/practice/dsa/two-sum-in-bst)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given the root of a binary search tree and an integer k.Return true if there exist two elements in the BST such that their **sum** is equal to **k** otherwise false.

### Example 1:

**Input:** root = [5, 3, 6, 2, 4, null, 7] , k = 9

**Output:** true

**Explanation:**

The BST contains multiple pair of nodes that sum up to k.

3 + 6 => 9.

5 + 4 => 9.

2 + 7 => 9.

### Example 2:

**Input:** root = [5, 3, 6, 2, 4, null, 7] , k = 14

**Output:** false

**Explanation:**

There is no pair in given BST that sum up to k.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= Number of Nodes <= 10^4
- -10^4 <= Node.val <= 10^4
- -10^5 <= k <= 10^5

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
