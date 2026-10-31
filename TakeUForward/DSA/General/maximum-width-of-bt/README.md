# [96. Maximum Width of BT](https://takeuforward.org/practice/dsa/maximum-width-of-bt)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given the root of a binary tree, return the **maximum width** of the given tree.

The width of a level is the number of positions between its leftmost and rightmost non-null nodes, inclusive.

When calculating this width, include any null positions between these two nodes as though the tree were laid out like a complete binary tree. Null positions outside the leftmost and rightmost non-null nodes are not counted.

The maximum width is the largest width among all levels.

### Example 1:

**Input:** root = [1, 3, 2, 5, 3, null, 9]

**Output:** 4

**Explanation:**

So if the below tree would be a complete binary tree then there would be total 4 nodes in the last level.

So the maximum width of the binary tree is between the nodes with value 5 and 9 is equal to 4.

<img src="https://static.takeuforward.org/content/1789463181_ExaBO7z-.webp">

### Example 2:

**Input:** root = [1, 3, 2, 5, null, null, 9, 6, null, 7]

**Output:** 7

**Explanation:**

If the below tree would be a complete binary tree then at last levels there would b 7 nodes including the node with value 6 and 7.

So the maximum width of binary tree is 7.

<img src="https://static.takeuforward.org/content/1789463187_cyUsSqQ6.webp">

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= Number of Nodes <= 3000
- -1000 <= Node.val <= 1000

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
