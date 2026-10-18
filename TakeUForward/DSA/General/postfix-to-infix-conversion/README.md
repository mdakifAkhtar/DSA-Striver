# [987. Postfix to Infix Conversion](https://takeuforward.org/practice/dsa/postfix-to-infix-conversion)

![Difficulty: Unspecified](https://img.shields.io/badge/Difficulty-Unspecified-6b7280?style=for-the-badge)

---

## 📝 Problem Statement

You are given a valid&nbsp; **postfix expression** &nbsp;as a string, where:

- Operands are&nbsp; **single lowercase English letters** &nbsp;('a' to 'z')

- Operators are&nbsp; **binary** : '+', '-', '*', '/'

The expression contains&nbsp; **no spaces** &nbsp;and is guaranteed to be&nbsp; **syntactically valid** .

Write a function to convert the given postfix expression into a&nbsp; **valid infix expression** .

**Use parentheses** &nbsp;to&nbsp; **clearly represent the evaluation order** &nbsp;of the expression.

### Example 1:

**Input:** "ab+"

**Output:** "(a+b)"

**Explanation:**

- &nbsp;postfix : a&nbsp;b&nbsp;+
- &nbsp;infix&nbsp;&nbsp;: (a + b)

### Example 2:

**Input:** &nbsp;"abc*+"

**Output:** "(a+(b*c))"

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 ≤ postExp.length ≤ 16000
- postExp consists only of lowercase letters (a‒z) as operands and the four binary operators + - * /.
- The given postfix expression is guaranteed valid (every operator has exactly two operands).

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
