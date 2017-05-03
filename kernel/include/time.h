/*************************************************************************
	> File Name: kernel/kernel/time.h
	> Author: LoveZJT
	> Mail: 151220055@smail.nju.edu.cn
	> Created Time: 2017年05月01日 星期一 18时19分01秒
 ************************************************************************/

#define TIMER_PORT 0x40
#define FREQ_8253 1193182
#define HZ 100

void initTimer() 
{
	int counter = FREQ_8253 / HZ;
	outByte(TIMER_PORT + 3, 0x34);
	outByte(TIMER_PORT + 0, counter % 256);
	outByte(TIMER_PORT + 0, counter / 256);
}
