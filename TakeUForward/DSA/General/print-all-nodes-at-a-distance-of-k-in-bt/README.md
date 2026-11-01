# [288. Print all nodes at a distance of K in BT](https://takeuforward.org/practice/dsa/print-all-nodes-at-a-distance-of-k-in-bt)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given the **root** of a binary tree, the value of a target node **target** , and an integer **k** . Return an array of the values of all nodes that have a distance **k** from the **target node** .

The answer can be returned in any order (N represents null).

**Note:** *Although input shows target as a value, internally it refers to the TreeNode with that value.*

### Example 1:

**Input:** root = [3, 5, 1, 6, 2, 0, 8, N, N, 7, 4] , target = 5, k = 2

**Output:** [1, 4, 7]

**Explanation:** The nodes that are a distance 2 from the target node (with value 5) have values 7, 4, and 1.

<img src="https://static.takeuforward.org/content/1789463346_S98oNUGH.webp">

### Example 2:

**Input:** root = [3, 5, 1, 6, 2, 0, 8, N, N, 7, 4] , target = 5, k = 3

**Output:** [0, 8]

**Explanation:** The nodes that are a distance 3 from the target node (with value 5) have values 0, 8.

<img src="https://static.takeuforward.org/content/1789463351_JMx7iDJ-.webp">

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= Number of Nodes <= 10^3
- -10^4 <= Node.val <= 10^4
- All the values **Node.val** are **unique** .
- target is the value of one of the nodes in the tree
- 0 <= k <= 10^3

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
