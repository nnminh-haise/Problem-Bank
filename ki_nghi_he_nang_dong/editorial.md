# Kì nghỉ hè năng động - Editorial

Đây là một bài quy hoạch động cơ bản. Trong đề bài, ta có vài điều kiện cần chú ý như sau:
- Tổng giá trị điểm năng suất lớn nhất là $10^5 \times 10^4 = 10^9$.
- Không có bất kì hai hay nhiều hơn ngày liên tiếp làm cùng $1$ hoạt động.

Gọi $f(i, j)$ với $i \in [1, n]$ và $j \in [1, 3]$. Trong đó:
- $j = 1$ nghĩa là Tuân đi tập Gym.
- $j - 2$ nghĩa là Tuân Code.
- $j = 3$ nghĩa là Tuân nấu ăn.

Và $f(i, j)$ là điểm năng suất của hoạt động $j$ trong ngày thứ $i$.

Bên cạnh đó, tương tự với ý nghĩa của $i$ và $j$ ta gọi $dp(i, j)$ là tổng điểm năng suất lớn nhất có thể tính đến ngày thứ $i$ và ngày thứ $i$ Tuân sẽ làm hoạt động $j$.

Với cách định nghĩa hàm $dp(i, j)$ thì kết quả bài toán sẽ là $max(dp(n, 1), dp(n, 2), dp(n, 3))$ *Giải thích: giả sử ta đã biết ngày thứ $i - 1$ Tuân làm hoạt động $j$, thì ngày thứ $i$ Tuân chắc chắn sẽ không làm hoạt động đó, và tổng điểm năng suất lớn nhất của ngày thứ $i$ sẽ là tổng điểm năng suất lớn nhất của ngày thứ $i - 1$ với điều kiện Tuân làm hoạt động $j$ cùng với điểm năng suất lớn nhất của ngày thứ $i$ khi làm hai hoạt động còn lại (không phải $j$).*

Với cách tư duy trên, ta có công thức truy hồi cho bài toán này như sau:

- $dp(1, j) = f(1, j) \forall j \in [1, 3]$.
- $
\forall i \in [2, n]
\begin{cases}
dp(i, 1) = f(i, 1) + max(dp(i - 1, 2), dp(i - 1, 3)). \\
dp(i, 2) = f(i, 2) + max(dp(i - 1, 1), dp(i - 1, 3)). \\
dp(i, 3) = f(i, 3) + max(dp(i - 1, 1), dp(i - 1, 2)). \\
\end{cases}
$

***Độ phức tạp thời gian:*** Vì ta chỉ duyệt một vòng `for` đi qua từng ngày nên độ phức tạp của thuật toán là $O(n)$.
