# Competitive Programming Problem Hints
## UVA Problem
### 11364Parking
the problem is all about round trip so all you have to do find they difference between lowest value and highest value and then multiply by two. That's all.
Because the resultant value contain the round trip. If you want to calculate the parking position that will be the middle value after sorting all value
Good luck :)



### 11547AutomaticAnswer
This problem is one of the easiest problem. All you have to do is find the result after calculation which is given in the problem.

![res = (((((x*567)/9)+7492)*235)/47)-498](http://www.sciweavers.org/tex2img.php?eq=%24%24%0D%0Ares%20%3D%20%28%28%28%28%28x%2A567%29%2F9%29%2B7492%29%2A235%29%2F47%29-498%0D%0A%24%24&bc=White&fc=Black&im=jpg&fs=12&ff=arev&edit=)

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
