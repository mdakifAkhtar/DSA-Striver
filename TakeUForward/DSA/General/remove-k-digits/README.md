# [281. Remove K Digits](https://takeuforward.org/practice/dsa/remove-k-digits)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given a string nums representing a non-negative integer, and an integer k, find the **smallest** possible integer after removing **k** digits from num.

**Note:** If removing k digits deletes all digits, **return "0"** . **The result must be a valid non-negative integer without leading zeros.**

### Example 1:

Input: nums = "541892", k = 2

Output: "1892"

Explanation: Removing the two digits 5 and 4 yields the smallest number, 1892.

### Example 2:

Input: nums = "1002991", k = 3

Output: "21"

Explanation: Remove the three digits 1(leading one), 9, and 9 to form the new number 21(Note that the output must not contain leading zeroes) which is the smallest.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- &nbsp;&nbsp;1 <= k <= nums.length <= 10^4
- &nbsp;&nbsp;nums consists of only digits.
- &nbsp;&nbsp;nums does not have any leading zeros except for the zero itself.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
