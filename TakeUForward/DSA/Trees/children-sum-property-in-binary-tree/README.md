# [239. Children Sum Property in Binary Tree](https://takeuforward.org/practice/dsa/children-sum-property-in-binary-tree)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given the root of a binary tree, return true if and only if every node’s value is equal to the sum of the values stored in its left and right children.

- For any missing ( null ) child, its value is treated as 0.
- A leaf node automatically satisfies the rule because both children are null.

### Example 1:

**Input:** root = [1,4,3,5]

**Output:** false

**Explanation:**

- The root is 1, but its children sum to 4 + 3 = 7. Since 1 ≠ 7, the tree violates the property.

### Example 2:

**Input:** root = [10,4,6,1,3,2,4]

**Output:** true

**Explanation:**

- 4 = 1 + 3
- 6 = 2 + 4
- 10 = 4 + 6
- All internal nodes satisfy the condition.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

1 ≤ n ≤ 10^4 (n = number of nodes `)

-10^5 ≤ Node.val ≤ 10^5

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
