# [258. Candy](https://takeuforward.org/practice/dsa/candy)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

A line of **N** kids is standing there. The rating values listed in the integer array **ratings** are assigned to each kid.

These kids are receiving candy, according to the following criteria:

- There must be at least one candy for every child.

- Kids whose scores are higher than their neighbours receive more candies than their neighbours.

Return the **minimum** number of candies needed to distribute among children.

### Example 1:

**Input:** ratings = [1, 0, 5]

**Output:** 5

**Explanation:** The distribution of candies will be 2 , 1 , 2 to first , second , third child respectively.

### Example 2:

**Input:** ratings = [1, 2, 2]

**Output:** 4

**Explanation:** The distribution of candies will be 1 , 2 , 1 to first , second , third child respectively.

The third gets only 1 candy because it satisfy above two criteria.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= n <= 5 × 10^4
- 0 <= ratings[i] <= 10^5

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
