# [323. Correct BST with two nodes swapped](https://takeuforward.org/practice/dsa/correct-bst-with-two-nodes-swapped)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given the root of a binary search tree (BST), where the values of exactly two nodes of the tree were **swapped** by mistake.

Recover the tree without changing its structure.

### Example 1:

**Input:** root = [1, 3, null, null, 2]

**Output:** [3, 1, null, null, 2]

**Explanation:**

3 cannot be a left child of 1 because 3 > 1. Swapping 1 and 3 makes the BST valid.

<img src="https://static.takeuforward.org/content/1789456071_C8C5WFl2.webp"><img src="https://static.takeuforward.org/content/1789456065_Tsb1hyxc.webp">

### Example 2:

**Input:** root = [3, 1, 4, null, null, 2]

**Output:** [2, 1, 4, null, null, 3]

**Explanation:**

2 cannot be in the right subtree of 3 because 2 < 3. Swapping 2 and 3 makes the BST valid.

<img src="https://static.takeuforward.org/content/1789456089_dmA2ltmM.webp">

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= Number of Nodes <= 10^4
- -2^31 <= Node.val <= 2^31 - 1

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
