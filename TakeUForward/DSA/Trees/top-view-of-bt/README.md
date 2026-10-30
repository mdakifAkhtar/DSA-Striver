# [180. Top View of BT](https://takeuforward.org/practice/dsa/top-view-of-bt)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given the root of a binary tree, return the **top view** of the binary tree.

The top view of a binary tree consists of the set of nodes visible when the tree is observed from above.

Return the values of these nodes ordered from the leftmost to the rightmost position.

If multiple nodes share the same horizontal distance from the root, only the node that appears first when traversing from left to right (i.e., the leftmost node) should be included in the result.

### Example 1:

**Input:** root = [1, 2, 3, 4, 5, 6, 7]

**Output:** [4, 2, 1, 3, 7]

**Explanation:**

<img src="https://static.takeuforward.org/content/1789463590_A6e0Xbzb.webp">

### Example 2:

**Input:** root = [10, 20, 30, 40, 60, 90, 100]

**Output:** [40, 20, 10, 30, 100]

**Explanation:**

<img src="https://static.takeuforward.org/content/1789463596_ABuaKnZ1.webp">

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= Number of Nodes <= 10^4
- -10^3 <= Node.val <= 10^3

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
