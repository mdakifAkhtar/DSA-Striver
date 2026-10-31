# [195. Print root to leaf path in BT](https://takeuforward.org/practice/dsa/print-root-to-leaf-path-in-bt)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given the root of a binary tree. Return all the **root-to-leaf paths** in the binary tree.

A leaf node of a binary tree is the node which does not have a left and right child.

### Example 1:

**Input:** root = [1, 2, 3, null, 5, null, 4]

**Output:** [ [1, 2, 5] , [1, 3, 4] ]

**Explanation:** There are only two paths from root to leaf.

From root 1 to 5 , 1 -> 2 -> 5.

From root 1 to 4 , 1 -> 3 -> 4.

<img src="https://static.takeuforward.org/content/1789463410_b7JrBMOo.webp">

### Example 2:

**Input:** root = [1, 2, 3, 4, 5]

**Output:** [ [1, 2, 4] , [1, 2, 5] , [1, 3] ]

**Explanation:**

<img src="https://static.takeuforward.org/content/1789463418_cNvpTMB7.webp">

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= Number of Nodes <= 3*10^3
- -10^3 <= Node.val <= 10^3

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
