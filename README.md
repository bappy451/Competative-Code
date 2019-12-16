# Competitive Programming Problem Hints
## UVA Problem
### 11364Parking
the problem is all about round trip so all you have to do find they difference between lowest value and highest value and then multiply by two. That's all.
Because the resultant value contain the round trip. If you want to calculate the parking position that will be the middle value after sorting all value
Good luck :)


<!-- Commented lines
<img src="https://latex.codecogs.com/svg.latex?\Large&space; y= mx + c  " />
-->


### 11547AutomaticAnswer
This problem is one of the easiest problem. All you have to do is find the result after calculation which is given in the problem.

```math
res = (((((x*567)/9)+7492)*235)/47)-498
```

can be rewrite author:

```math
res = ((((x*63)+7492))*5)-498
```

After calculating this we need to find out the _**10th**_ position of the number.
To find out that we can use modulus

<img src="https://latex.codecogs.com/svg.latex?\Large&space; res = res \% 100 " />

This provide the last two digit of the number. Then we can find out our final result by

```math
res = res/10
```

That's all :)
