# Cổ phiếu

Cổ phiếu công ty FPT trong $n$ ngày tới, ngày thứ $i$ giá trị cổ phiếu sẽ là $a_i$. Tuấn bắt đầu chơi cổ phiếu vào ngày thứ $i$. Mỗi ngày cậu sẽ chỉ làm một trong ba hoạt động sau:
1. Mua $1$ cổ phiếu của công ty FPT với giá $a_i$.
2. Bán tất cả cổ phiếu cậu đang sở hữu với giá $a_i$ cho mỗi một cổ phiếu.
3. Không mua hoặc bán gì cả.

Có $q$ truy vấn, truy vấn thứ $i$ cho biết Tuấn sẽ bắt đầu chơi cổ phiểu vào ngày thứ $j$ trong $n$ ngày đó.

***Yêu cầu:*** Với mỗi truy vấn, cho biết lợi nhuận cậu kiếm được.

## Input

- Dòng đầu tiên là số nguyên $n$.
- Dòng tiếp theo gồm $n$ số nguyên $a_1, a_2, \dots, a_n$.
- Dòng thứ $3$ là số nguyên $q$.
- $q$ dòng tiếp theo mỗi dòng gồm một số nguyên cho biết ngày mà Tuấn sẽ bắt đầu chơi cổ phiếu.

## Constraints

- $1 \le n \le 10^5$.
- $1 \le a_i \le 10^9$.
- $1 \le q \le 10^5$.

## Subtasks

- Subtask $1$ ($50\%$ số điểm): có
    - $1 \le n \le 1000$.
    - $q = 1$.
- Subtask $2$ ($30\%$ số điểm): có
    - $1 \le n \le 10^5$.
    - $q = 1$.
- Subtask $3$ ($20\%$ số điểm): không có ràng buộc gì thêm.

## Output

- Gồm $q$ dòng, mỗi dòng là đáp án của truy vấn tương ứng.

## Sample Input

```
4
1 2 5 4
2
1
3
```

## Sample Output

```
7
0
```