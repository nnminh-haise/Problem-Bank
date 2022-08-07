# Kì nghỉ hè năng động

Tranh thủ một tháng nghỉ hè trước khi bước vào năm học thứ hai, Tuân muốn tranh thủ làm những việc cậu thích. Sau khi suy nghĩ thì cậu lựa ra ba hoạt động yêu thích của cậu như sau: tập Gym, code và nấu ăn. Song, mỗi ngày cậu chỉ làm một trong ba hoạt động trên và sẽ không làm cùng một hoạt động giống nhau hai hay nhiều ngày liên tiếp.

Mỗi một hoạt động ở từng ngày sẽ có một mức điểm năng suất khác nhau. Giả sử, ngày thứ $i$ Tuân đi tập Gym thì sẽ có mức điểm năng suất là $a_i$, tương tự nếu ngày thứ $i$ cậu code thì sẽ có mức điểm năng suất là $b_i$. Cuối cùng nếu ngày thứ $i$ cậu nấu ăn thì sẽ có mức điểm năng suất là $c_i$.

Tuân được nghỉ tết trong $n$ ngày liên tiếp. Với cách chọn hoạt động tối ưu nhất, thì cậu tò mò không biết tổng điểm năng suất sau $n$ ngày lớn nhất sẽ là bao nhiều.

***Yêu cầu:*** Giúp Tuân tính tổng số điểm năng suất sau $n$ ngày lớn nhất là bao nhiêu.

## Input

- Dòng đầu tiên là số nguyên dương $n$.
- $n$ dòng tiếp theo, mỗi dòng gồm ba số, theo thứ tự là $a_i, b_i$ và $c_i$ như mô tả ở trên đề bài.

## Constraints

- $1 \le n \le 10^5$.
- $1 \le a_i, b_i, c_i \le 10^4$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): có
    - $1 \le n \le 10$.
    - $1 \le a_i, b_i, c_i \le 100$.
- Subtask $2$ ($75\%$ số điểm): không có ràng buộc gì thêm.

## Output

- Một số nguyên duy nhất là tổng số điểm năng suất lớn nhất mà Tuân có thể nhận được.

## Sample Input

```
3
10 40 70
20 50 80
30 60 90
```

## Sample Output

```
210
```