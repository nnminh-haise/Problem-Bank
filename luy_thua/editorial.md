# Lũy thừa - Editorial

Theo đề bài, ta có hai ẩn số cần quan tâm đến là $x$ và $k$. Theo giả thiết, giá trị $k$ phải là lớn nhất. Do đó, ta giả sử với trường hợp $x$ bé nhất có thể để tìm giá trị $k$ lớn nhất như sau:
- Với $x = 1$ thì $x^k = 1 \; \forall \; k \in \mathbb{R}$.
- Với $x = 2$ thì $2 < 2^{39} < 10^{12} < 2^{40}$.
- Với $x = 3$ thì $2 < 3^{25} < 10^{12} < 3^{26}$.
- Tương tự.

Ta thấy giá trị lớn nhất có thể của $k$ là $k = 40$ ứng với $x = 2$. Và dĩ nhiên khi $x = 10^{12}$ thì $k = 1$ là giá trị nhỏ nhất.
Sau khi có nhận xét này, ta có thể giải quyết bài toán như sau: áp dụng thuật toán tìm kiếm nhị phân với không gian tìm kiếm là giá trị của $x$ ứng với mỗi giá trị $k$ giảm dẫn từ $40 \to 1$. Cụ thể như sau:
- Với mỗi $k \in [40, 1]$, ta sử dụng thuật toán tìm kiếm nhị phân một giá trị $x$ đầu tiên bé nhất trong đoạn: $[\sqrt[k]{a}, \sqrt[k]{b}]$.
- Nếu tồn tại một giá trị $x$ nguyên thì trả về giá trị $k$ hiện tại.

*Nhận xét:* Vì thuật toán trả về giá trị $k$ ngay sau khi tìm thấy giá trị $x$ đầu tiên nên luôn đảm bảo giá trị $k$ nguyên dương và lớn nhất.

**Lưu ý:** Khi cài đặt giải thuật, chú ý đến độ sai số có thể của đoạn $[\sqrt[k]{a}, \sqrt[k]{b}]$.

***Độ phức tạp thuật toán:*** $O(q \cdot \log{10^{12}})$.
