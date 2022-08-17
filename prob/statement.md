# Hình vuông 0 1

Cho một bảng kích thước $n \times m$, các dòng được đánh số từ $1$ đến $n$ và các cột được đánh số từ $1$ đến $m$. Mỗi ô vuông được đánh số $0$ hoặc $1$. Tìm ô vuông lớn nhất thỏa các điều kiện sau:
1. Hình vuông đồng nhất: tức là các ô vuông bên trong đều phải được đánh số là $0$ hoặc $1$.
2. Cạnh hình vuông song song với cạnh bảng.
3. Kích thước hình vuông là lớn nhất có thể.

***Yêu cầu:*** Đưa ra cạnh của hình vuông tìm được.

## Input

- Dòng đầu tiên là hai số nguyên dương $n$ và $m$.
- $n$ dòng tiếp theo, mỗi dòng ghi $m$ số được cách nhau bởi dấu cách là số được ghi tại ô $(i, j)$.

## Constraints

- $1 \le n, m \le 1000$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): có $1 \le n, m \le 10$.
- Subtask $2$ ($75\%$ số điểm): không có ràng buộc gì thêm.

## Output

- Một số nguyên duy nhất là cạnh của hình vuông lớn nhất tìm được.

## Sample Input

```
11 13
0 0 0 0 0 1 0 0 0 0 0 0 0
0 0 0 0 1 1 1 0 0 0 0 0 0
0 0 1 1 1 1 1 1 1 0 0 0 0
0 0 1 1 1 1 1 1 1 0 0 0 0
0 1 1 1 1 1 1 1 1 1 0 0 0
1 1 1 1 1 1 1 1 1 1 1 0 0
0 1 1 1 1 1 1 1 1 1 0 0 0
0 0 1 1 1 1 1 1 1 0 0 0 0
0 0 1 1 1 1 1 1 1 0 0 0 0
0 0 0 0 1 1 1 0 0 0 0 1 1
0 0 0 0 0 1 0 0 0 0 0 1 1
```

## Sample Output

```
7
```