# [263. Count total nodes in a complete BT](https://takeuforward.org/practice/dsa/count-total-nodes-in-a-complete-bt)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Return the **number of nodes** in a binary tree given its root.

Every level in a complete binary tree possibly with the exception of the final one is fully filled, and every node in the final level is as far to the left as it can be. At the last level h, it can have **1** to **2** ^ **h** nodes inclusive.

### Example 1:

**Input:** root = [1, 2, 3, 4, 5, 6]

**Output:** 6

**Explanation:**

<img src="https://static.takeuforward.org/content/1789463078_jApRpy2X.webp">

### Example 2:

**Input:** root = [1, 2, 3, 4, 5, 6, 7, 8, 9]

**Output:** 9

**Explanation:**

<img src="https://static.takeuforward.org/content/1789463090_OyIHbVeI.webp">

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= Number of Node <= 5*10^4
- -10^5 <= Node.val <= 10^5
- The tree is guaranteed to be **complete** .

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
