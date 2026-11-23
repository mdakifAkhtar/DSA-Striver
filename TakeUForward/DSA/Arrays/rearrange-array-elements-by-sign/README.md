# [375. Rearrange array elements by sign](https://takeuforward.org/practice/dsa/rearrange-array-elements-by-sign)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given an&nbsp;integer array&nbsp; **nums** of&nbsp;even&nbsp;length consisting of an&nbsp;equal&nbsp;number of positive and negative **** integers.Return the answer array in such a way that the given conditions are met:

- Every&nbsp;consecutive **** pair&nbsp;of integers have&nbsp; **opposite signs** .

- For all integers with the same sign, the&nbsp;order&nbsp;in which they were present in&nbsp;nums **** is&nbsp;preserved.

- The rearranged **** array begins with a positive **** integer.

### Example 1:

**Input:** nums = [2, 4, 5, -1, -3, -4]

**Output:** [2, -1, 4, -3, 5, -4]

**Explanation:**

The positive number 2, 4, 5 maintain their relative positions and -1, -3, -4 maintain their relative positions

### Example 2:

**Input:** nums = [1, -1, -3, -4, 2, 3]

**Output:** [1, -1, 2, -3, 3, -4]

**Explanation:**

The positive number 1, 2, 3 maintain their relative positions and -1, -3, -4 maintain their relative positions

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 2 <= nums.length <= 10^5
- 1 <= | nums[i] | <= 10^4
- nums.length is an even number.
- Number of positive and negative numbers are equal.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
