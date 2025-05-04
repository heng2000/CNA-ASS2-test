/*
 * @Author: yuheng li a1793138
 * @Date: 2025-04-18 15:41:48
 * @LastEditors: yuheng 
 * @LastEditTime: 2025-05-04 17:36:50
 * @FilePath: \CNA-ASS2\sr.h
 * @Description: 
 * 
 * Copyright (c) ${2024} by ${yuheng li}, All Rights Reserved. 
 */
extern void A_init(void);
extern void B_init(void);
extern void A_input(struct pkt);
extern void B_input(struct pkt);
extern void A_output(struct msg);
extern void A_timerinterrupt(void);

/* included for extension to bidirectional communication */
#define BIDIRECTIONAL 0       /*  0 = A->B  1 =  A<->B */
extern void B_output(struct msg);
extern void B_timerinterrupt(void);