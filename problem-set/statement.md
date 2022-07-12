# Xen kẽ

Một dãy số được gọi là xen kẽ nếu các số dương và số âm được xếp xen kẽ nhau, số dương đứng trước rồi đến số âm, cứ như vậy cho đến hết. Các số dương (hoặc âm) còn lại sẽ được xếp ở cuối dãy.

Lưu ý: không cần quan tâm đến tính thứ tự của các số, chỉ cần thỏa mãn số dương xen kẽ số âm và số dương trước, số âm sau. Dãy đảm bảo không có số $0$.

***Yêu cầu:*** Cho trước một dãy số, hãy sắp xếp dãy đã cho thành một dãy xen kẽ như mô tả trên.

## Input

- Dòng đầu tiên là số nguyên dương $n$.
- Dòng tiếp theo là $n$ số nguyên $a_1, a_2, a_3, \dots, a_n$ không theo thứ tự.

## Constraints

- $2 \le n \le 10^6$.
- $-10^5 \le a_i \le 10^5$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): có
    - $2 \le n \le 10^3$.
    - $-10^3 \le a_i \le 10^3$.
- Subtask $2$ ($75\%$ số điểm): không có ràng buộc gì thêm.

## Output

- Một dòng duy nhất là dãy mới đã được sắp xếp.

## Sample Input

```
10
8 -8 -7 -9 3 3 2 -2 -7 10
```

## Sample Output

```
10 -7 2 -2 3 -9 3 -7 8 -8
```