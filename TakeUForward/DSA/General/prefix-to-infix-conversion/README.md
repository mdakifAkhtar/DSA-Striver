# [999. Prefix to Infix Conversion](https://takeuforward.org/practice/dsa/prefix-to-infix-conversion)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

You are given a valid arithmetic expression in prefix notation. Your task is to convert it into a fully parenthesized infix expression.

Prefix notation (also known as **Polish notation** ) places the operator before its operands. In contrast, infix notation places the operator between operands.

Your goal is to convert the **prefix expression** into a valid **fully parenthesized infix expression** .

### Example 1:

**Input:** expression = "+ab"

**Output:** "(a+b)"

### Example 2:

**Input:** expression = "*+ab-cd"

**Output:** "((a+b)*(c-d))"

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= expression.length <= 10^4
- Expression contains Valid binary operators: +, -, *, /, ^
- Expression contains Valid operands: lowercase letters (a-z) or digits (0-9)
- Expression contains The input is guaranteed to be a valid prefix expression.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
