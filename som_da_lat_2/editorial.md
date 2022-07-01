# Sớm Đà Lạt 2 - Editorial

Theo đề bài, ta có giả thiết: từ viên đá thứ $i$ ta có thể di chuyển đến viên đá thứ $i + 1, i + 2, i + 3, \dots, i + k$. Do đó ta có thể suy ngược lại rằng viên đá thứ $i$ có thể được đi đến từ các viên đá $i - 1, i - 2, i - 3, \dots, i - k$.
Từ nhận xét trên, gọi hàm $f(i)$ là giá trị $P$ nhỏ nhất khi có tối đa $i$ viên đá trên mặt nước. Ta thấy:
- Với $i = 1$ thì $P = 0$.
- Với $i = 2$ thì $P = |a_2 - a_1|$.
- Với $i = n$ thì ta có $f(i)$ được tính bằng $min(f(i - j) + |a_i - a_j|) \forall j = 1, \dots, k$.
