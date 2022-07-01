# Sớm Đà Lạt - Editorial

Ta thấy, xuất phát từ viên đá thứ nhất, để đến được viên đá thứ hai ta chỉ có thể từ viên đá thứ nhất, nhảy đến. Do đó, giá trị $P$ nhỏ nhất hay cũng là duy nhất khi chỉ có $2$ viên đá trên hồ là $P = |a_2 - a_1|$.
Vậy giả sử khi có:
- $3$ viên đá thì Haise có thể từ viên đá thứ nhất nhảy lên viên đá thứ ba. Hoặc từ viên đá thứ nhất nhảy sang viên đá thứ hai và từ viên đá thứ hai nhảy sang viên đá thứ ba.
- $4$ viên đá thì để đến được viên đá thứ tư thì Haise có thể xuất phát từ viên đá thứ ba hoặc viên đá thứ hai.
- Tổng quát lên $n$ viên đá thì Haise có thể nhảy đến viên đá thứ $n$ từ viên đá thứ $n - 1$ hoặc viên đá thứ $n - 2$.

Và khi đó, gọi $f(i)$ là hàm tính giá trị $P$ khi có $i$ viên đá. Dựa trên nhận xét trên ta có:
- $f(1) = 0$ vì cậu không di chuyển gì cả nên giá trị $P$ khi đó bằng $0$.
- $f(2) = |a_2 - a_1|$ vì để đến viên đá thứ hai thì chỉ có thể bắt đầu nhảy từ viên đá thứ nhất.
- $f(3) = min(f(2) + |a_3 - a_2|, f(1) + |a_3 - a_1|)$ vì ta sẽ lấy giá trị nhỏ nhất trong hai giá trị có thể.
