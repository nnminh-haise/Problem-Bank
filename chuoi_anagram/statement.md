# Chuỗi Anagram

Hai chuỗi Anagram là hai chuỗi có số lượng kí tự giống nhau, chuỗi này có thể thu được bằng việc thay đổi vị trí của các kí tự trong chuỗi kia nhưng không thay đổi kí tự (chỉ thay đổi vị trí).

***Yêu cầu:*** Cho hai chuỗi $s$ và $t$. Kiểm tra xem hai chuỗi $s$ và $t$ có phải là hai chuỗi Anagram không.

## Input

- Dòng đầu tiên là chuỗi $s$.
- Dòng thứ hai là chuỗi $t$.

## Constraints

- Độ dài hai chuỗi $s$ và $t$ không quá $5 \cdot 10^4$ kí tự.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): có độ dài hai chuỗi $s$ và $t$ không quá $100$ kí tự.
- Subtask $2$ ($75\%$ số điểm): không có ràng buộc gì thêm.

## Output

- In `True` nếu hai chuỗi $s$ và $t$ là hai chuỗi Anagram và ngược lại in `False`.

## Sample Input

```
abcd
dabc
```

## Sample Output

```
True
```