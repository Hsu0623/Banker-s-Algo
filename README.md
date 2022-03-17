# Banker-s-Algo

reference: https://zh.wikipedia.org/wiki/%E9%93%B6%E8%A1%8C%E5%AE%B6%E7%AE%97%E6%B3%95

```
Given five memory partitions of 120 Kb, 500 Kb, 230 Kb, 320 Kb, 600 Kb (in order), 
how would the best-fit, and worst-fit algorithms place processes of 230 Kb, 420 Kb, 150 Kb, and 430 Kb (in order)?


First-fit:
• 230 Kb is put in 500 Kb partition (120 Kb, 270 Kb, 230 Kb, 320 Kb, 600 Kb)
• 420 Kb is put in 600 Kb Partition (120 Kb, 270 Kb, 230 Kb, 320 Kb, 180 Kb)
• 150 Kb is put in 270 Kb Partition (120 Kb, 120 Kb, 230 Kb, 320 Kb, 180Kb)
• 430 Kb must wait

Best-fit:
• 230 Kb is put in 230 Kb parition (120 Kb, 500 Kb, 0 Kb, 320 Kb, 600 Kb)
• 420 Kb is put in 500 Kb parition (120 Kb,   80 Kb, 0 Kb, 320 Kb, 600 Kb)
• 150 Kb is put in 320 Kb parition (120 Kb,   80 Kb, 0 Kb, 170 Kb, 600 Kb)
• 430 Kb is put in 600 Kb parition (120 Kb,   80 Kb, 0 Kb, 170 Kb, 170 Kb)

Worst-fit:
• 230 Kb is put in 600 Kb parition (120 Kb, 500 Kb, 230 Kb, 320 Kb, 370 Kb)
• 420 Kb is put in 500 Kb parition (120 Kb,   80 Kb, 230 Kb, 320 Kb, 370 Kb)
• 150 Kb is put in 370 Kb parition (120 Kb,   80 Kb, 230 Kb, 320 Kb, 220 Kb)
• 430 Kb must wait


```
