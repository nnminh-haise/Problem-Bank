# Tải bài giảng

Một video bài giảng dài $z$ giây. Dung lượng video cần phát trong $1$ giây là $x$ MB. Nhưng mạng nhà An lúc đó chỉ tải được $y$ MB trong $1$ giây.

An muốn xem bài giảng mà không dừng lại giữa chừng. An quyết định, trước khi bắt đầu xem sẽ chờ $t_0$ giây để bài giảng được tải xuống một lượng dung lượng nhất định. Một video bài giảng sẽ được phát liên tục nếu dung lượng tại thời điểm bất kì mà An đã tải về lớn hơn hoặc bằng tổng dung lượng của đoạn video tính tới thời điểm đó.

***Yêu cầu:*** Tính thời gian $t_0$ tối thiểu.

## Input

- Ba số tự nhiên $x, y, z$ như mô tả.

## Constraints

- $1 \le x, y, z \le 10^5$.
- $y < x$.

## Subtasks

- Subtask $1$ ($80\%$ số điểm): có $1 \le x, y, z \le 100$.
- Subtask $2$ ($20\%$ số điểm): không có ràng buộc gì thêm.

## Output

- Một số duy nhất là $t_0$.

## Sample Input

```
10 3 2
```

## Sample Output

```
5
```