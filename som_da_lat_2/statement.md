# Sớm Đà Lạt 2

Giữa khí trời se lạnh của thành phố Đà Lạt, Tuin đang dạo quanh hồ Xuân Hương thì vô tình thấy một hàng đá ở gần mặt hồ. Cậu đếm thì thấy có $n$ viên đá và trên mỗi viên đá có khắc một số nguyên dương. Cậu ngẫu hứng muốn nhảy từ viên đá đầu tiên sang viên đá thứ $n$. Từ viên đá thứ $i$, cậu có thể nhảy đến viên đá thứ $i + 1, i + 2, \dots, i + k$. Khi cậu nhảy từ viên đá thứ $i$ sang viên đá thứ $j$ thì cậu sẽ tính chênh lệch giữa hai viên đá và tính tổng các giá trị này lại, gọi là $P$.

***Yêu cầu:*** Hãy giúp Tuin tính và đưa ra giá trị $P$ nhỏ nhất có thể khi cậu nhảy từ viên đá thứ nhất đến viên đá thứ $n$.

## Input

- Dòng đầu tiên là hai số nguyên $n$ và $k$.
- Dòng tiếp theo gồm $n$ số nguyên, số thứ $i$ là giá trị $a_i$ được khắc trên viên đá thứ $i$ tương ứng.

## Constraints

- $2 \le n \le 10^5$.
- $1 \le k \le 100$.
- $1 \le a_i \le 10^4$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): có
    - $2 \le n \le 100$.
    - $1 \le k \le 10$.
    - $1 \le a_i \le 100$.
- Subtask $2$ ($75\%$ số điểm): không có ràng buộc gì thêm.

## Output

- Gồm một số nguyên $P$ duy nhất.

## Sample Input

```
5 3
10 30 40 50 20
```

## Sample Output

```
30
```