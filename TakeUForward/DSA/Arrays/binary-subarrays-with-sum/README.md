# [393. Binary Subarrays With Sum](https://takeuforward.org/practice/dsa/binary-subarrays-with-sum)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given a binary array nums and an integer goal. Return the **number** of **non-empty subarrays** with a sum goal.

A subarray is a continuous part of the array.

### Example 1:

**Input:** nums = [1, 1, 0, 1, 0, 0, 1] , goal = 3

**Output:** 4

**Explanation:** The subarray with sum 3 are

[1, 1, 0, 1]

[1, 1, 0, 1, 0]

[1, 1, 0, 1, 0, 0]

[1, 0, 1, 0, 0, 1].

### Example 2:

**Input:** nums = [0, 0, 0, 0, 1] , goal = 0

**Output:** 10

**Explanation:** Some of the subarray with sum 0 are

[0]

[0, 0]

[0, 0, 0]

[0, 0, 0, 0]

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= nums.length <= 3*10^4
- 0 <= goal <= nums.length
- *nums* consist of only 0 and 1.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
