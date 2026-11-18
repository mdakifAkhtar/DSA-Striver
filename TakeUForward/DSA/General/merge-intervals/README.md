# [10. Merge Intervals](https://takeuforward.org/practice/dsa/merge-intervals)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

You are given an array intervals where intervals[i] = [startᵢ, endᵢ] represents the inclusive interval startᵢ ≤ x ≤ endᵢ.

Your task is to merge every pair of intervals that overlap and return all the non-overlapping intervals that completely cover the same ranges as the original array.

Two intervals overlap if they share at least one common point (i.e. start₂ ≤ end₁ and start₁ ≤ end₂).

Return the merged intervals in any order.

### Example 1:

**Input:** intervals = [[1,3],[2,6],[8,10],[15,18]]

**Output:** [[1,6],[8,10],[15,18]]

**Explanation:** [1,3] and [2,6] overlap --> merge to [1,6].

### Example 2:

**Input:** &nbsp;intervals = [[1,4],[4,5]]

**Output:** [[1,5]]

**Explanation:** Because the end of [1,4] equals the start of [4,5], they are considered overlapping.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 ≤ intervals.length ≤ 10⁴
- intervals[i].length == 2
- 0 ≤ startᵢ ≤ endᵢ ≤ 10⁴

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
