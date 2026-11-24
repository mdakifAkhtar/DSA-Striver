# [169. 4 Sum](https://takeuforward.org/practice/dsa/4-sum)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given an integer array **nums** and an integer **target** . Return all quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

- a, b, c, d are all distinct valid indices of nums.

- nums[a] + nums[b] + nums[c] + nums[d] == target.

Notice that the solution set must not contain duplicate quadruplets. One element can be a part of multiple quadruplets. The output and the quadruplets can be returned in any order.

### Example 1:

**Input:** nums = [1, -2, 3, 5, 7, 9], target = 7

**Output:** [[-2, 1, 3, 5]]

**Explanation:**

nums[1] + nums[0] + nums[2] + nums[3] = 7

### Example 2:

**Input:** nums = [7, -7, 1, 2, 14, 3], target = 9

**Output:** []

**Explanation:**

No quadruplets are present which add upto 9

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= nums.length <= 200
- -10^4 <= nums[i] <= 10^4
- -10^4 <= target <= 10^4

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
