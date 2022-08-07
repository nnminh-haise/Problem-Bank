# Chuỗi con chung dài nhất - LCS - Editorial

Gọi $n$ và $m$ lần lượt là độ dài của chuỗi $s_1$ và $s_2$. Gọi $dp(i, j)$ là độ dài của chuỗi con chung dài nhất khi xét chuỗi $s_1$ có $i$ phần tử đầu tiên và chuỗi $s_2$ với $j$ phần tử đầu tiên.

Ta lấy ví dụ với chuỗi $s_1 = "\text{abcdg}"$ và chuỗi $s_2 = "\text{bcef}"$.
- Ban đầu ta giả sử chuỗi $s_1$ và $s_2$ có $1$ phần tử. Nghĩa là: $s_1 = "\text{a}"$ và $s_2 = "\text{b}"$. Lúc này ta kết luận ngay được không có chuỗi con chung nào tồn tại, hay độ dài của chuỗi con chung dài nhất là $0$.
- Sau đó, ta sẽ xét trường hợp chuỗi $s_1$ có $1$ phần tử và chuỗi $s_2$ có $2$ phần tử. Nghĩa là: $s_1 = "\text{a}"$ và $s_2 = "\text{bc}"$. Lúc này, độ dài chuỗi con chung dài nhất vẫn là $0$.
- Tiếp đến ta xét trường hợp chuỗi $s_1$ có $2$ phần tử và chuỗi $s_2$ có $2$ phần tử. Nghĩa là: $s_1 = "\text{ab}"$ và $s_2 = "\text{bc}"$. Thì ta thấy hai chuỗi có một chuỗi con chung là $s = "\text{b}"$.
- Tương tự như vậy cho đến khi chuỗi $s_1$ có $n$ phần tử và $s_2$ có $m$ phần tử. 

Với cách giải quyết như trên, ta giả sử, khi đang xét đến kí tự thứ $i$ của chuỗi $s_1$ và kí tự thứ $j$ của chuỗi $s_2$. Nếu $s_1[i] = s_2[j]$ thì điều này có nghĩa ta vừa xác định thêm được một kí tự vào chuỗi con chung dài nhất. Lúc này, chuỗi con chung dài nhất tính tới thời điểm hiện tại là chuỗi con chung của hai chuỗi $s_1$ với $i - 1$ kí tự đầu tiên và $s_2$ với $j - 1$ kí tự dầu tiên. Ngược lại nếu $s_1[i] \neq s_2[j]$ thì ta sẽ lựa chọn chuỗi con dài hơn giữa hai trường hợp:
- TH $1$: Chuỗi con chung dài nhất khi chuỗi $s_1$ có $i$ kí tự đầu tiên và chuỗi $s_2$ có $j - 1$ kí tự đầu tiên.
- TH $2$: Chuỗi con chung dài nhất khi chuỗi $s_1$ có $i - 1$ kí tự đầu tiên và chuỗi $s_2$ có $j$ kí tự đầu tiên.

Từ nhận xét trên, ta rút ra công thức truy hồi cho bài toán quy hoạch động như sau:
$$
\begin{cases}
dp(i, 0) = dp(0, j) = 0 \forall i \in [1, n], j \in [1, m]. \\
dp(i, j) = dp(i - 1, j - 1) + 1, \; \text{if} \; s_1[i] = s_2[j]. \\
dp(i, j) = max(dp(i - 1, j), dp(i, j - 1)), \; \text{if} \; s_1[i] \neq s_2[j].
\end{cases}
$$

***Độ phức tạp thời gian:*** Với từng phần tử thứ $i$ của chuỗi $s_1$ ta sẽ xét $m$ phần tử của chuỗi $s_2$. Khi xét tới kí tự cuối cùng hay kí tự thứ $n$ thì ta sẽ phải duyệt qua $n \times m$ làn lặp. Do đó độ phức tạp thời gian của thuật toán là $O(n \times m)$.
