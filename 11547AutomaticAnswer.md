# 11547AutomaticAnswer
This problem is one of the easiest problem. All you have to do is find the result after calculation which is given in the problem.

$$
res = (((((x*567)/9)+7492)*235)/47)-498
$$
can be rewrite author:
$$
res = ((((x*63)+7492))*5)-498
$$
After calculating this we need to find out the _**10th**_ position of the number.
To find out that we can use modulus

res = res % 100

this provide the last two digit of the number. Then we can find out our final result by
$$
res = res/10
$$
That's all :)
