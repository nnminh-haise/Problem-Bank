# Trạm dừng chân

Trên đoạn đường đi Đà Lạt, Tuân ghé chân tại một trạm nghỉ bên đường. Nơi đây là tổ hợp gồm quán cafe, nhà hàng và nhà nghỉ với phong cảnh cạnh bờ sông rất đẹp và thơ mộng. Tuân lựa cho mình một góc bên ban công rồi thả mình vào bầu không khí yên tĩnh và sảng khoái sau một khoảng thời gian đầy căng thẳng và mệt mỏi. Bỗng một cô gái xuất hiện và đưa cho cậu một trò chơi như sau: có $n$ viên đá hình vuông giống nhau, nhiệm vụ của người chơi là chia số đá này thành $3$ phần, gọi lần lượt từ trái sang phải là phần $a, b$ và $c$ sao cho số đá trong phần $b$ phải lớn hơn số đá trong phần $a$ và số đá trong phần $a$ phải lớn hơn số đá trong phần $b$ (mỗi phần đá phải có ít nhất $1$ viên đá). *Bên cạnh đó số đá ở phần $b$ phải ít nhất có thể.* Sau khi đưa cho cậu số đá cô gái để lại cho cậu một nụ cười rồi sau đó đi vào trong quầy phục vụ. Ngoài $n$ viên đá ra cậu còn nhận được một lời nhắn chúc may mắn và một lời hẹn ở Đà Lạt nếu cậu hoàn thành trò chơi. Rất tò mò bởi sự bí ẩn của cô gái kia cậu quyết tâm tìm ra lời giải.

***Yêu cầu:*** Tìm cách chia số đá trên thành $3$ phần thỏa mãn yêu cầu của trò chơi. Nếu có nhiều đáp án, in ra đáp án bất kì.

## Input

- Dòng đầu tiên là số nguyên dương $q$ - số truy vấn cần trả lời.
- $q$ dòng tiếp theo, mỗi dòng là một số nguyên dương $n$ - số đá Tuân được cho trước.

## Constraints

- $1 \le q \le 10^4$.
- $6 \le n \le 10^5$.

## Subtasks

- Subtask $1$ ($25\%$ số điểm): có
    - $q = 1$.
    - $1 \le n \le 100$.
- Subtask $2$ ($75\%$ số điểm): không có ràng buộc gì thêm.

## Output

- Gồm $q$ dòng, mỗi dòng in ra $3$ số nguyên lần lượt là số lượng đá ở các phần $a, b$ và $c$.

## Sample Input

```
6
11
6
10
100000
7
8
```

## Sample Output

```
4 5 2
2 3 1
4 5 1
33334 33335 33331
2 4 1
3 4 1   
```