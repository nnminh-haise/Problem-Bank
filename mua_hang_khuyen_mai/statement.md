# Mua hàng khuyến mãi

Nhân dịp năm mới $2020$, trung tâm mua sắm HN mở một đợt khuyến mãi lớn. Bính là một khách hàng thân thiết, nên trung tâm gọi cho Bình một danh sách $n$ loại mặt hàng khuyến mãi, được đánh số từ $1$ đến $n$. Mặt hàng thứ $i$ có giá truyến mãi $x_i$ đồng, giá trị thực là $y_i$ đồng và số lượng là $z_i \; (1 \le i \le n)$.

Bình có số tiền $m$ đồng để mua các loại mặt hàng khuyến mãi và mong muốn đạt được tổng giá trị thực của các loại mặt hàng có thể mua được là lớn nhất. Vì số lượng hàng khuyens mãi nhiều, nên Bình không biết phải chọn mua những loại mặt hàng nào, số lượng bao nhiêu cho phù hợp với số tiền của mình.

***Yêu cầu:*** Giúp Bình mua các loại mặt hàng của trung tâm mua sắm HN, sao cho không vượt qua số tiền $m$ và đạt tổng giá trị thực của các loại mặt hàng có thể mua được là lớn nhất.

## Input

- Dòng đầu tiên chứa hai số nguyên dương $n$ và $m$.
- Dòng thứ $i$ trong $n$ dòng tiếp theo ghi ba số nguyên dương $x_i, y_i, z_i$ lần lượt là giá trị khuyến mãi, giá trị thực và số lượng của loại mặt hàng thứ $i$.

## Constraints

- $1 \le n \le 500$.
- $1 < m \le 5 \cdot 10^4$.
- $1 \le x_i \le 10^4$.
- $1 \le y_i \le 10^4$.
- $1 \le z_i \le 100$.
- $1 \le i \le n$.

## Output

- Dòng đầu là tổng giá trị đạt được.
- Dòng thứ $i$ trong $n$ dòng tiếp theo ghi số $k_i$ là số lượng loại mặt hàng thứ $i$ được chọn mua. Nếu có nhiều cách chọn thỏa mãn, thì đưa ra cách chọn có chỉ số loại mặt hàng nhỏ nhất là nhiều nhất.

## Sample Input

```
5 14
9 10 1
2 3 3
2 3 3
3 6 4
5 10 4
```

## Sample Output

```
28
0
0
0
3
1
```