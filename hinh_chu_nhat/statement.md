# Hình chữ nhật

Cho một hình chữ nhật gồm $n$ dòng và $m$ cột. Các dòng được đánh số từ $1$ đến $n$ và các cột được đánh số từ $1$ đến $m$. Ô ở dòng $i$ cột $j$ gọi là ô có tọa độ $(i, j)$.

Trên hình chữ nhật có $q$ ô được đánh dấu `x`.

***Yêu cầu:*** In ra diện tích hình chữ nhật lớn nhất chỉ chứa duy nhất $1$ chữ `x`.

## Input

- Dòng đầu tiên là ba số nguyên $n, m, q$ như mô tả trên.
- $q$ dòng tiếp theo, mỗi dòng là một tọa độ của một ô được đánh dấu `x`.

## Constraints

- $1 \le n, m \le 10^4$.
- $1 \le q \le 10^3$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): có
- Subtask $2$ ($75\%$ số điểm): không có ràng buộc gì thêm.

## Output

- Một số nguyên duy nhất là diện tích hình chữ nhật lớn nhất tìm được.

## Sample Input

```
4 5 4
2 3
2 5
3 1
4 4
```

## Sample Output

```
9
```

