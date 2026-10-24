# [217. Stock span problem](https://takeuforward.org/practice/dsa/stock-span-problem)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

Given an array arr of size n, where each element arr[i] represents the stock price on day i. Calculate the **span** of stock prices for each day.

The span S_i for a specific day i is defined as the **** maximum number of consecutive previous days (including the current day) for which the stock price was less than or equal to the price on day i.

### Example 1:

**Input:** n = 7, arr = [120, 100, 60, 80, 90, 110, 115]

**Output:** [1, 1, 1, 2, 3, 5, 6]

**Explanation:**

Traversing the given input span:

120 is greater than or equal to 120 and there are no more elements behind it so the span is 1,

100 is greater than or equal to 100 and smaller than 120 so the span is 1,

60 is greater than or equal to 60 and smaller than 100 so the span is 1,

80 is greater than or equal to 60, 80 and smaller than 100 so the span is 2,

90 is greater than or equal to 60, 80, 90 and smaller than 100 so the span is 3,

110 is greater than or equal to 60, 80, 90, 100, 110 and smaller than 120 so the span is 5,

115 is greater than or equal to all previous elements and smaller than 120 so the span is 6.

Hence the output will be 1 1 1 2 3 5 6.

### Example 2:

**Input:** n = 6, arr = [15, 13, 12, 14, 16, 20]

**Output:** [1, 1, 1, 3, 5, 6]

**Explanation:**

Traversing the given input span:

15 is greater than or equal to 15 and there are no more elements behind it, so the span is 1.

13 is smaller than 15, so the span is 1.

12 is smaller than 13, so the span is 1.

14 is greater than or equal to 12 and 13, but smaller than 15, so the span is 3 (days with values 12, 13, and 14).

16 is greater than or equal to 14, 12, 13, and 15, so the span is 5.

20 is greater than or equal to all previous elements, so the span is 6.

Hence the output will be 1 1 1 3 5 6.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 ≤ n ≤ 10^5
- 1 ≤ arr[i] ≤ 10^9

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
