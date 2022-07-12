# Trạm dừng chân - Editorial

Gọi $a, b, c$ lần lượt là số lượng đá của phần đá tương ứng. Theo đề bài ta có: $b > a > c$ và giá trị $b$ là nhỏ nhất.
- Ta giả sử số lượng đá của phần $b$ là $p$ khi đó các giá trị $a$ và $c$ thỏa mãn sẽ có thể là $p - 1$ và $p - 2$, điều kiện $p \ge 3$.
- Khi đó ta có các giá trị $b, a, c$ lần lượt sẽ là $p, p - 1, p - 2$.
- Vì tổng $a + b + c = n$ nên $p + (p - 1) + (p - 2) = 3p - 3 = n \; \; (*)$.
- Khi đó giá trị $p$ cần tìm sẽ bằng $\dfrac{n + 3}{3}$ và sẽ đảm bảo không có giá trị nào bé hơn $p$ thỏa mãn yêu cầu bài toán. (Vì tổng $(*)$ đã chứng minh được $n$ có thể biểu diễn qua $1$ giá trị $p$ duy nhất.)
- Suy ra giá trị $a, b, c$ lần lượt sẽ là $p - 1, p$ và $p - 2$.
- Song có thể giá trị $(n + 3)$ không chia hết cho $3$ nên gọi $d = (n + 3) \% 3$. Khi đó:
    - Nếu $d = 2$ thì ta sẽ cộng $1$ vào $a$ và $b$. Nếu bạn thắc mắc, hiện tại sau khi tìm được $p$ ta đã tính được các giá trị $a, b, c$ cần tìm. Song vì $(n + 3)$ không chia hết cho $3$ nên tổng $a + b + c$ không bằng $n$. Và ta có quan hệ so sánh: $b > a > c$. Vậy khi cộng $1$ vào cả $a$ và $b$ thì quan hệ so sánh $(b + 1) > (a + 1) > c$ vẫn sẽ được giữ nguyên và tổng của $(a + 1) + (b + 1) + c$ sẽ bằng $n$.
    - Nếu $d = 1$ thì ta sẽ cộng $1$ và $b$. Giải thích tương tự ở trên.
