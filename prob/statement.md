# Vệ quân

Một quần đảo gồm $n$ hòn đảo riêng biệt được kết nối với nhau bằng những cây cầu hai chiều. Dạo gần đây có tin đồn trên quần đảo có rất nhiều vàng khiến cho hải tặc muốn đên đây nhiều hơn. Là người sinh ra và lớn lên ở đây, cũng như là người cai quản quần đảo này, *nnminh* muốn sắp xếp những người võ sĩ của mình để bảo vệ cả quần đảo. Có $q$ người võ sĩ và người thứ $i$ có sức mạnh $p_i$. Với sức mạnh này, người đó có thể bảo vệ những hòn đảo cách người đó không quá $p_i$ cây cầu.

Ví dụ người võ sĩ có sức mạnh là $2$ thì người này chỉ có thể bảo vệ những hòn đảo cách người này không quá $2$ cây cầu. Và để tối ưu thì không có người võ sĩ nào bảo vệ hòn đảo nào đã được bảo vệ. Nói cách khác mỗi hòn đảo chỉ được duy nhất một người võ sĩ bảo vệ.

Trong $n$ hòn đảo có $m$ cây cầu kết nối những hòn đảo này với nhau. *nnminh* đã đặt một vài người võ sĩ tại một số vị trí, song cậu không chắc chắn liệu vị trí đặt của mình đã tối ưu hay không.

***Yêu cầu:*** Là một lập trình viên thông minh, hãy kiểm tra thử cách đặt của *nnminh* có tối ưu hay không. Nếu có in `Yes`, ngược lại in `No`.

## Input

- Dòng đầu tiên là số nguyên $t$ cho biết số truy vấn cần trả lời, mỗi truy vấn có dạng như sau:
    - Dòng đầu tiên là ba số nguyên $n, m, q$ như mô tả ở trên. Các hòn đảo được đánh số từ $1$ đến $n$.
    - $m$ dòng tiếp theo, mỗi dòng là hai số nguyên $u, v$ cho biết có cây cầu nối hòn đảo $u$ và $v$ với nhau.
    - $q$ dòng tiếp theo, mỗi dòng gồm hai số $c, p$ cho biết có một võ sĩ ở hòn đảo $c$ và có sức mạnh $p$.

## Constraints

- $1 \le t \le 10$.
- $1 \le n \le 10^6$.
- $n - 1 \le m \le \min\left(10^7, \dfrac{n \cdot (n - 1)}{2}\right)$.
- $1 \le q, c \le n$.
- $1 \le p \le 10^6$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): có
    - $t = 1$.
    - $1 \le n \le 1000$.
- Subtask $2$ ($75\%$ số điểm): không có ràng buộc gì thêm.

## Output

- Gồm $t$ dòng, mỗi dòng là kết quả của truy vấn tương ứng.

## Sample Input

```
2
3 2 2
1 2
2 3
1 2
2 0
4 5 2
1 4
1 2
1 3
4 2
3 4
2 1
3 0
```

## Sample Output

```
No
Yes
```