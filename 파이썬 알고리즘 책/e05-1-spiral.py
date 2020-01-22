# 재귀 호출을 이용한 사각 나선 그리기
import turtle as t

def spiral(sp_len):
    if sp_len <= 5:
        return
    t.forward(sp_len)
    t.right(121)
    spiral(sp_len - 5)

t.speed(0)
spiral(250)
#t.hideturtle()
t.done()
