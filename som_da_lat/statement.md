# Sớm Đà Lạt

Giữa khí trời se lạnh của thành phố Đà Lạt, Tuin đang dạo quanh hồ Xuân Hương thì vô tình thấy một hàng đá ở gần mặt hồ. Cậu đếm thì thấy có $n$ viên đá và trên mỗi viên đá có khắc một số nguyên dương. Cậu ngẫu hứng muốn nhảy từ viên đá đầu tiên sang viên đá thứ $n$. Từ viên đá ở vị trí $i$ cậu có thể nhảy sang viên đá ở vị trí $i + 1$ hoặc vị trí $i + 2$. Khi từ viên đá này nhảy sang viên đá khác, cậu tính chênh lệch giá trị được ghi trên hai viên đá và sẽ tính tổng các giá trị đó lại, gọi là $P$.

***Yêu cầu:*** Hãy giúp Tuin tính và đưa ra giá trị $P$ nhỏ nhất có thể khi cậu nhảy từ viên đá thứ nhất đến viên đá thứ $n$.

## Input

- Dòng đầu tiên là số nguyên dương $n$ - số lượng viên đá trên mặt hồ.
- Dòng tiếp theo gồm $n$ số nguyên, số thứ $i$ là giá trị $a_i$ được khắc trên viên đá thứ $i$ tương ứng.

## Constraints

- $2 \le n \le 10^5$.
- $1 \le a_i \le 10^4$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): có
    - $2 \le n \le 100$.
    - $1 \le a_i \le 100$.
- Subtask $2$ ($75\%$ số điểm): không có ràng buộc gì thêm.

## Output

- Gồm một số nguyên $P$ duy nhất.

## Sample Input

```
4
10 30 40 20
```

## Sample Output

```
30
```