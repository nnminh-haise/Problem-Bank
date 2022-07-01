# Lũy thừa

Có $q$ truy vấn, mỗi truy vấn gồm hai số nguyên dương $a$ và $b$.

***Yêu cầu:*** Với mỗi truy vấn, tìm số nguyên dương $k$ lớn nhất sao cho tồn tại số nguyên dương $x$ thỏa $a \le x^k \le b$.

## Input

- Dòng đầu tiên là số nguyên dương $q$ - số truy vấn cần trả lời.
- $q$ dòng tiếp theo, mỗi dòng gồm hai số nguyên dương $a$ và $b$ được ngăn cách nhau bởi dấu cách.

## Constraints

- $1 \le q \le 5000$.
- $2 \le a \le b \le 10^{12}$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): có
    - $1 \le q \le 10$.
    - $2 \le a \le b \le 10000$.
- Subtask $2$ ($75\%$ số điểm): không có ràng buộc gì thêm.

## Output

- Gồm $q$ dòng, mỗi dòng là một số nguyên dương $k$ lớn nhất thỏa mãn yêu cầu đề bài.

## Sample Input

```
4
5 20
10 12
2 100
1000000000000 1000000000000
```

## Sample Output

```
4
1
6
12
```

## Explanation

- Ở truy vấn $1$: tồn tại giá trị $x = 4$ và $k = 2$ thỏa $5 \le 2^4 \le 20$.
- Tương tự ở các truy vấn sau.

---

*Nguồn:* *[VNOI](https://oj.vnoi.info/problem/power)*