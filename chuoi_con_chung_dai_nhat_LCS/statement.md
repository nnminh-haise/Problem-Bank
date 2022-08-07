# Chuỗi con chung dài nhất - LCS

Cho hai chuỗi $s_1$ và $s_2$ lần lượt có độ dài $n$ và $m$ kí tự (các kí tự trong bảng chữ cái tiếng anh in thường).

Ta định nghĩa một chuỗi con của chuỗi $s$ là chuỗi $f$ sao cho chuỗi này có thể thu được bằng cách loại bỏ đi một vài (hoặc không) kí tự trong chuỗi $s$ nhưng không thay đổi kí tự.

Chuỗi con chung của hai chuỗi $s_1$ và $s_2$ là một chuỗi vừa đồng thời là chuỗi con của $s_1$ và là chuỗi con của $s_2$.

***Yêu cầu:*** Tìm và đưa ra chuỗi con chung dài nhất của hai chuỗi $s_1$ và $s_2$. Vì có nhiều chuỗi con thỏa mãn nên chỉ cần đưa ra dộ dài của chuỗi con chung.

## Input

- Dòng đầu tiên là chuỗi $s_1$.
- Dòng thứ hai là chuỗi $s_2$.

## Constraints

- Độ dài hai chuỗi $s_1$ và $s_2$ không quá $3000$ kí tự.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): có độ dài hai chuỗi $s_1$ và $s_2$ không quá $20$ kí tự.
- Subtask $2$ ($75\%$ số điểm): không có ràng buộc gì thêm.

## Output

- Một số nguyên duy nhất là độ dài của chuỗi con chung dài nhất.

## Sample Input

```
abcdg
bcef
```

## Sample Output

```
2
```

## Explanation

Chuỗi con chung dài nhất: `bc` có độ dài là $2$.
