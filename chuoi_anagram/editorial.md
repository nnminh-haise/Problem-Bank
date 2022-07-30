# Chuỗi Anagram - Editorial

### Giải thuật 1: Sắp xếp

***Ý tưởng:*** Ta sắp xếp lại các kí tự trong chuỗi $s$ và $t$ theo thứ tự bất kì dựa vào thứ tự trong bảng ASCII. Khi đó, nếu hai chuỗi $s$ và $t$ là hai chuỗi "Anagram" thì sẽ giống nhau, ngược lại sẽ không phải hai chuỗi "Anagram".

### Giải thuật 2: Đếm số lần xuất hiện

***Ý tưởng:*** Vì chuỗi này là một hoán vị của chuỗi kia nên sẽ không có kí tự nào bị thay bằng kí tự khác.

Gọi hàm $f(x)$ là hàm trả về số lần xuất hiện của kí tự $x$ trong chuỗi $s$. Tương tự, hàm $g(x)$ là hàm trả về số lần xuất hiện của kí tự $x$ trong chuỗi $t$.

Khi đó, nếu hai chuỗi $s$ và $t$ là hai chuỗi "Anagram" thì ta có kết luận $f(x) = g(x)$. Ngược lại, hai chuỗi đã cho không phải hai chuỗi "Anagram".

***Cải tiến:*** Theo nhận xét trên, khi hai chuỗi $s$ và $t$ là hai chuỗi "Anagram" thì ta có $f(x) = g(x) \Leftrightarrow f(x) - g(x) = 0$. Như vậy, ta có thể tối ưu bằng cách, khi xét đến kí tự thứ $i$, ta sẽ tăng $f(s[i])$ lên $1$ đơn vị và giảm $f(t[i])$ đi một đơn vị.

Nếu chuỗi $s$ và $t$ là hai chuỗi "Anagram" thì hàm $f$ sẽ bằng $0$ ở mọi trường hợp. Ngược lại nếu tồn tại một kí tự $x$ nào đó mà $f(x) \neq 0$ thì hai chuỗi $s$ và $t$ không phải hai chuỗi "Anagram".
