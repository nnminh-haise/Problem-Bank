# Chuỗi ARN

Một phòng thí nghiệm đang nghiên cứu về gen của một chuỗi ARN đặc biệt được mã hóa bằng một xâu $s$ gồm các kí tự `A`, `U`, `G`, `X`. Họ muốn cắt từ chuỗi ARN đó một mạch (được mã hóa bằng xâu $x$) cho trước.

***Yêu cầu:*** Từ chuỗi ARN $s$ có thể cắt được tối đa bao nhiêu đoạn mạch $x$.

## Input

- Dòng đầu là xâu kí tự $s$ mô tả chuỗi ARN.
- Dòng tiếp theo là xâu $x$.
- Hai chuỗi $s$ và $x$ chỉ gồm các kí tự `A`, `U`, `G`, `X`.

## Constraints

- Độ dài hai chuỗi không quá $10^3$ kí tự.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): có độ dài hai chuỗi không quá $100$ kí tự.
- Subtask $2$ ($75\%$ số điểm): không có ràng buộc gì thêm.

## Output

- Số lượng đoạn mạch $x$ tối đa cắt được.

## Sample Input

```
AUAUGXXAUGXGX
AUGX
```

## Sample Output

```
2
```