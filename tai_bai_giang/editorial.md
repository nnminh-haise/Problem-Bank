# Tải bài giảng - Editorial

Sau khi đợi $t_0$ giây thì video sẽ bắt đầu phát. Theo đề bài, gọi $h$ là thời gian video đã phát thì ta phải đảm bảo đủ điều kiện:
$$t_0 \times y + h \times y \ge h \times x \; \forall h \in [1, z]$$

Theo đề bài, ta có $x > y \Rightarrow hx > hy \; \forall h \in [1, z]$. Do đó, $t_0y \ge hx-hy \Leftrightarrow t_0y \ge h(x-y)$ mà $h \in [1, z]$. Nên $x - y \le t_0y \le z(x-y)$. Chia ba vế cho $y$ ta được:
$$\dfrac{x - y}{y} \le t_0 \le \dfrac{z(x - y)}{y}$$.

Ta sẽ thử từng giá trị $t_0$ trong đoạn $\left[\dfrac{x - y}{y}, \dfrac{z(x - y)}{y}\right]$, nếu gặp giá trị $t_0$ đầu tiên thỏa điều kiện ban đầu thì đó là kết quả cần tìm.

Song cách làm này lại tốn quá nhiều thời gian và không lấy trọn $20\%$ test cuối cùng!

Ta nhận xét, nếu $h = z$ thì ta có: $t_0y + zy \ge zx \Leftrightarrow t_0 \ge \dfrac{z(x - y)}{y}$. Ta giả sử video đã được tải hết, khi đó máy tính của An đã tải được $zy$ MB và video cần $zx$ MB dung lượng. Do đó nếu dung lượng tải về $t_0y$ lớn hơn hoặc bằng chênh lệch giữa dung lượng đã tải về và dung lượng cần thì chắc chắn trong suốt quá trình từ giây thứ nhất đến giây thứ $z$ thì dung lượng được tải về sẽ luôn lớn hơn hoặc bằng dung lượng cần.

Vậy kết quả bài toán là ${t_0}_{\min} = \left\lceil\dfrac{z(x - y)}{y}\right\rceil$.