# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

[image000]: ./result/result_0.05_0.00_0.50.csv.png
[image100]: ./result/result_0.10_0.00_0.50.csv.png
[image200]: ./result/result_0.15_0.00_0.50.csv.png
[image300]: ./result/result_0.20_0.00_0.50.csv.png
[image400]: ./result/result_0.25_0.00_0.50.csv.png
[image500]: ./result/result_0.30_0.00_0.50.csv.png

[image001]: ./result/result_0.05_0.00_1.00.csv.png
[image101]: ./result/result_0.10_0.00_1.00.csv.png
[image201]: ./result/result_0.15_0.00_1.00.csv.png
[image301]: ./result/result_0.20_0.00_1.00.csv.png
[image401]: ./result/result_0.25_0.00_1.00.csv.png
[image501]: ./result/result_0.30_0.00_1.00.csv.png

[image002]: ./result/result_0.05_0.00_1.50.csv.png
[image102]: ./result/result_0.10_0.00_1.50.csv.png
[image202]: ./result/result_0.15_0.00_1.50.csv.png
[image302]: ./result/result_0.20_0.00_1.50.csv.png
[image402]: ./result/result_0.25_0.00_1.50.csv.png
[image502]: ./result/result_0.30_0.00_1.50.csv.png

[image003]: ./result/result_0.05_0.00_2.00.csv.png
[image103]: ./result/result_0.10_0.00_2.00.csv.png
[image203]: ./result/result_0.15_0.00_2.00.csv.png
[image303]: ./result/result_0.20_0.00_2.00.csv.png
[image403]: ./result/result_0.25_0.00_2.00.csv.png
[image503]: ./result/result_0.30_0.00_2.00.csv.png

[image004]: ./result/result_0.05_0.00_2.50.csv.png
[image104]: ./result/result_0.10_0.00_2.50.csv.png
[image204]: ./result/result_0.15_0.00_2.50.csv.png
[image304]: ./result/result_0.20_0.00_2.50.csv.png
[image404]: ./result/result_0.25_0.00_2.50.csv.png
[image504]: ./result/result_0.30_0.00_2.50.csv.png

[image005]: ./result/result_0.05_0.00_3.00.csv.png
[image105]: ./result/result_0.10_0.00_3.00.csv.png
[image205]: ./result/result_0.15_0.00_3.00.csv.png
[image305]: ./result/result_0.20_0.00_3.00.csv.png
[image405]: ./result/result_0.25_0.00_3.00.csv.png
[image505]: ./result/result_0.30_0.00_3.00.csv.png


## Implementation
1. PID Control
 - I wrote the code in PID.cpp
   (P : Propotional, Integral, Differential) are implemented.

2. PID Values for finding best parameters

| Kp	|
|:-----:|
| 0.05	|
| 0.1	|
| 0.15	|
| 0.2	|
| 0.25	|
| 0.3	|

| Ki	|
|:-----:|
| 0.0	|
| 0.0	|
| 0.0	|
| 0.0	|
| 0.0	|
| 0.0	|

| Kd	| 
|:-----:|
| 0.5	| 
| 1.0	| 
| 1.5	| 
| 2.0	| 
| 2.5	| 
| 3.0	| 


## Analysis
- I set the parameter combinations of (Kp, Ki, Kd).

![alt text][image000]
![alt text][image100]
![alt text][image200]
![alt text][image300]
![alt text][image400]
![alt text][image500]

![alt text][image001]
![alt text][image101]
![alt text][image201]
![alt text][image301]
![alt text][image401]
![alt text][image501]


![alt text][image002]
![alt text][image102]
![alt text][image202]
![alt text][image302]
![alt text][image402]
![alt text][image502]


![alt text][image003]
![alt text][image103]
![alt text][image203]
![alt text][image303]
![alt text][image403]
![alt text][image503]


![alt text][image004]
![alt text][image104]
![alt text][image204]
![alt text][image304]
![alt text][image404]
![alt text][image504]

![alt text][image005]
![alt text][image105]
![alt text][image205]
![alt text][image305]
![alt text][image405]
![alt text][image505]


## Result
I think Kp(0.05), Ki(0.0), Kd(1.0) are the best PID parameters.

### 1st
![alt text][image001]

### 2nd
![alt text][image002]

### 3rd
![alt text][image100]


